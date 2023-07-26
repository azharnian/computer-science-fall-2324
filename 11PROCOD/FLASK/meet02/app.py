from flask import Flask, render_template, request, redirect, url_for

app = Flask(__name__)

@app.route("/")
def index():
    return render_template("index.html")

@app.route("/submit", methods=["GET", "POST"])
def submit():
    # message = request.args.get("message")

    if request.method == "GET":
        # return "You don't have any message!"
        return redirect(url_for("index"))

    message = request.form.get("message")
    return render_template("submit.html", message=message)

@app.route("/search", methods=["GET", "POST"])
def search():
    if request.method == "GET":
        return render_template("search.html", title="Search!")
    
    query = request.form.get("query")
    return redirect(f"https://www.google.com/search?q={query}")

if __name__ == "__main__":
    app.run(debug=True)