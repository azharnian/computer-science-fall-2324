from flask import Flask, render_template, request, redirect, url_for, flash
import pymysql

app = Flask(__name__)
app.config['SECRET_KEY'] = 'SECRET'

db_user = "root"
db_password = ""
db_host = "localhost"
db_name = "meet11"

connection = pymysql.connect(
    host=db_host,
    user=db_user,
    password=db_password,
    database=db_name
)

@app.route("/", methods=["GET", "POST"])
def index():

    #insert data from form into db
    if request.method == "POST":
        note = request.form.get("note")
        try:
            cursor = connection.cursor()
            cursor.execute(f"INSERT INTO notes (note) VALUES ('{note}');")
            connection.commit()
        finally:
            cursor.close()

    #read data all notes from db
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
    try :
        cursor = connection.cursor()
        cursor.execute(f"SELECT * FROM notes WHERE id = {note_id}")
        note = cursor.fetchone()
        if note:
            cursor.execute(f"DELETE FROM notes WHERE id = {note_id}")
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

@app.route("/update/<int:note_id>")
def update(note_id):
    pass
    

if __name__ == "__main__":
    app.run(debug=True)