from flask import Flask, render_template, redirect, url_for, request, flash, session
from flask_session import Session

app = Flask(__name__)
app.config[""] = ""
app.config[""] = ""
app.config[""] = ""

Session(app)

@app.route("/search", methods=["GET", "POST"])
def search():

    return render_template("search.html")

@app.route("/login", methods=["GET", "POST"])
def login():

    return render_template("login.html")

@app.route("/logout")
def logout():

    return redirect(url_for("search"))
