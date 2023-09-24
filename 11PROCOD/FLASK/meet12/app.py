from flask import Flask, render_template, request, redirect, url_for, flash, session
from flask_session import Session
import pymysql

app = Flask(__name__)
app.config['SECRET_KEY'] = 'SECRET'
app.config["SESSION_TYPE"] = "filesystem"
app.config["SESSION_PERMANENT"] = False
Session(app)

db_user = "root"
db_password = ""
db_host = "localhost"
db_name = "meet12"

connection = pymysql.connect(
    host=db_host,
    user=db_user,
    password=db_password,
    database=db_name
)

@app.route("/", methods=["GET", "POST"])
def index():
    # protected route
    if "user_id" not in session:
        return redirect(url_for("login"))
    
    if request.method == "POST":
        note = request.form.get("note")
        try:
            cursor = connection.cursor()
            cursor.execute("INSERT INTO notes (note) VALUES (%s);", note )
            connection.commit()
        finally:
            cursor.close()

    try:
        cursor = connection.cursor()
        cursor.execute("SELECT * FROM notes;")
        notes = cursor.fetchall()
    except:
        notes = []
    finally:
        cursor.close()
    return render_template("index.html", notes=notes)

@app.route("/delete/<int:note_id>")
def delete(note_id):
    # protected route
    if "user_id" not in session:
        return redirect(url_for("login"))
    
    try :
        cursor = connection.cursor()
        # cursor.execute(f"SELECT * FROM notes WHERE id = {note_id}")
        cursor.execute("SELECT * FROM notes WHERE id = %s", note_id)
        note = cursor.fetchone()
        if note:
            # cursor.execute(f"DELETE FROM notes WHERE id = {note_id}")
            cursor.execute("DELETE FROM notes WHERE id = %s", note_id)
            connection.commit()
            msg = ("Your note had been already deleted.", "success")
        else:
            msg = ("Your note does not exists.", "warning")
    except:
        pass
    finally:
        cursor.close()
    flash(msg[0], msg[1])
    return redirect(url_for("index"))

@app.route("/update/<int:note_id>", methods=["GET", "POST"])
def update(note_id):
    # protected route
    if "user_id" not in session:
        return redirect(url_for("login"))
    
    cursor = connection.cursor()
    if request.method == "POST":
        new_note = request.form.get("new_note")
        print(new_note, note_id)
        # cursor.execute(f"UPDATE notes SET note = {new_note} WHERE id = {note_id}")
        cursor.execute("UPDATE notes SET note = %s WHERE id = %s", (new_note, note_id))
        cursor.close()
        return redirect(url_for("index"))
    try:
        cursor.execute(f"SELECT * FROM notes WHERE id = {note_id}")
        note = cursor.fetchone()
    except:
        pass
    finally:
        cursor.close()

    return render_template("note_detail.html", note=note)
    
@app.route("/login", methods=["GET", "POST"])
def login():
    if request.method == "POST":
        cursor = connection.cursor()
        username = request.form.get("username")
        password = request.form.get("password")

        cursor.execute("SELECT * FROM users WHERE username = %s", username)
        user = cursor.fetchone()
        if user:
            if username == user[1] and password == user[2]:
                # print("ok")
                session["user_id"] = user[0]
                flash("Login Successfull", "success")
                return redirect(url_for("index"))
            else:
                flash("Login Failed, Please check your username or password!", "warning")
        else:
            flash("Login Failed, Please check your username or password!", "warning")

    return render_template("login.html")

@app.route("/register", methods=["GET", "POST"])
def register():
    
    return render_template("signup.html")

@app.route("/logout")
def logout():
    # protected route
    if "user_id" not in session:
        return redirect(url_for("login"))
    
    session.pop("user_id", None)
    flash("You have been logged out", "success")
    return redirect(url_for("login"))




if __name__ == "__main__":
    app.run(debug=True)