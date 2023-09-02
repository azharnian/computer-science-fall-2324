from flask import Flask, render_template, request
import pymysql

app = Flask(__name__)

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


if __name__ == "__main__":
    app.run(debug=True)