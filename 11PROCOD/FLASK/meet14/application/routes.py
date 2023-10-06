from flask import render_template, flash, session, redirect, url_for

from application import app, db
from application.utils import login_required

from application.models import User, Note
from application.forms import *

@app.route("/", methods=["GET", "POST"])
@login_required
def index():
    user = User.query.get(session["user_id"])
    notes = user.notes

    return render_template("index.html", notes=notes)

@app.route("/delete/<int:note_id>")
@login_required
def delete(note_id):
    
    note = Note.query.filter(id == note_id, created_by == session['user_id']).first()

    if note:
        db.session.delete(note)
        db.session.commit()
        flash("Your note had been already deleted.", "success")
    else:
        flash("Your note does not exists.", "warning")
    return redirect(url_for("index"))


@app.route("/update/<int:note_id>", methods=["GET", "POST"])
@login_required
def update(note_id):
    form = CreateNoteForm()
    note = Note.query.filter(Note.id == note_id, Note.created_by==session['user_id']).first()

    if form.validate_on_submit():
        new_note = form.note.data
        note.note = new_note
        db.session.commit()
        flash("Update Note Completed", "success")
        return redirect(url_for("index"))

    return render_template("note_detail.html", note=note, form=form)
    
@app.route("/login", methods=["GET", "POST"])
def login():
    form = LoginForm()
    if form.validate_on_submit():
        user = User.query.filter_by(username = form.username.data).first()
        if user:
            if user.password == form.password.data:
                session["user_id"] = user.id
                flash("Login Successful", "success")
                return redirect(url_for("index"))
        flash("Something wrong", "warning")
    return render_template("login.html", form=form)

@app.route("/register", methods=["GET", "POST"])
def register():
    pass

@app.route("/logout")
@login_required
def logout():
    pass