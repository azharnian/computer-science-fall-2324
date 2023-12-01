from flask import Blueprint, redirect, url_for, flash, render_template, request
from flask_login import current_user, login_user, login_required, logout_user

from application import db
from application.users.forms import LoginForm, SignUpForm
from application.posts.forms import CreatePostForm
from application.users.models import User
from application.posts.models import Post
from application.project.utils import save_image


project = Blueprint("project", __name__)

@project.route('/', methods=['GET', 'POST'])
@login_required
def index():
    form = CreatePostForm()

    if form.validate_on_submit():
        post = Post(
            author_id = current_user.id,
            caption = form.caption.data
        )
        post.photo = save_image(form.post_pic.data)
        db.session.add(post)
        db.session.commit()
        flash('Your image has been posted 🩷!', 'success')

    page = request.args.get('page', 1, type=int)
    posts = Post.query.filter_by(author_id = current_user.id)\
                        .order_by(Post.post_date.desc())\
                        .paginate(page=page, per_page=3)

    return render_template('index.html', title='Home', form=form, posts=posts)


@project.route('/login', methods=['GET', 'POST'])
def login():
    if current_user.is_authenticated:
        return redirect(url_for('index'))

    form = LoginForm()

    if form.validate_on_submit():
        username = form.username.data
        password = form.password.data

        user = User.query.filter_by(username=username).first()
        if user and password == user.password:
            login_user(user)
            return redirect(url_for('profile', username=username))
        else:
            flash('Invalid username or password', 'error')

    return render_template('login.html', title="Login", form=form)

@project.route('/logout')
@login_required
def logout():
    logout_user()
    return redirect(url_for('login'))

@project.route('/signup')
def signup():
    form = SignUpForm()
    return render_template('signup.html', title='SignUp', form=form)

@project.route('/<string:username>')
@login_required
def profile(username):
    posts = current_user.posts
    reverse_posts = posts[::-1]
    return render_template('profile.html', title=f'{current_user.fullname} Profile', posts=reverse_posts)

@project.route('/about')
def about():
    return render_template('about.html', title='About')
