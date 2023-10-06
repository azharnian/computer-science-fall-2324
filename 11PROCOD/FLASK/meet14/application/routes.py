from flask import render_template, flash

from application import app
from application.utils import login_required

from application.models import User
from application.forms import LoginForm

@app.route("/", methods=["GET", "POST"])
@login_required
def index():
    pass

@app.route("/delete/<int:note_id>")
@login_required
def delete(note_id):
    pass

@app.route("/update/<int:note_id>", methods=["GET", "POST"])
@login_required
def update(note_id):
    pass
    
@app.route("/login", methods=["GET", "POST"])
def login():
    form = LoginForm()
    if form.validate_on_submit():
        user = User.query.filter_by(username = form.username.data).first()
        if user:
            if user.password == form.password.data:
                return "ok"
        flash("Something wrong", "warning")
    return render_template("login.html", form=form)

@app.route("/register", methods=["GET", "POST"])
def register():
    pass

@app.route("/logout")
@login_required
def logout():
    pass