from flask import Blueprint, render_template, flash, redirect, url_for
from flask_login import login_required, current_user

from application import db
from application.users.forms import EditProfileForm
from application.users.models import User

users = Blueprint('users', __name__)

@users.route('/edit', methods=['GET', 'POST'])
@login_required
def edit():
    form = EditProfileForm()

    if form.validate_on_submit():
        user = User.query.get(current_user.id)
        if form.username.data != user.username:
            user.username = form.username.data
        user.fullname = form.fullname.data
        user.bio = form.bio.data

        if form.profile_pic.data:
            pass

        db.session.commit()
        flash('Profile updated', 'success')
        return redirect(url_for('profile', username=current_user.username))
    
    form.username.data = current_user.username
    form.fullname.data = current_user.fullname
    form.bio.data = current_user.bio
    
    return render_template('edit.html', title=f'Edit {current_user.username} Profile', form=form)
