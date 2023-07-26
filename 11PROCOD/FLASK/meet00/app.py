from flask import Flask, render_template

from datetime import datetime

app = Flask(__name__)

@app.route("/")
def index():

    res = 4 * 10 - 5
    return str(res)

@app.route("/hello")
def hello():
    return '<h1 style="color:red">Hello, world!</h1>'

@app.route("/profile/<string:username>")
def profile(username):
    return render_template("profile.html", username=username)

@app.route("/about")
def about():
    return render_template("about.html")

@app.route("/isitnewyear")
def isitnewyear():
    day = datetime.now().day
    month = datetime.now().month

    # if day == 1 and month == 1:
    #     msg = "New Year!!!"
    # else:
    #     msg = "Not yet!"
    # return render_template("newyear.html", msg=msg)

    return render_template("newyear.html", day=day, month=month)


if __name__ == "__main__":
    app.run(debug=True)