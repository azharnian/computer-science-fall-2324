from flask_wtf import FlaskForm
from wtforms import StringField, PasswordField, SubmitField #, EmailField, IntegerField etc
from wtforms.validators import DataRequired, Length, EqualTo #, Email etc

class RegistrationForm(FlaskForm):
    username = StringField("Username", validators=[DataRequired(), Length(min=4, max=8)])
    password = PasswordField("Password", validators=[DataRequired(), Length(min=8)])
    confirm_password = PasswordField("Confirm Password", validators=[DataRequired(), EqualTo("password", message="Password must match")])
    submit = SubmitField("Sign Up")

class LoginForm(FlaskForm):
    username = StringField("Username", validators=[DataRequired()])
    password = PasswordField("Password", validators=[DataRequired(), Length(min=4)])
    submit = SubmitField("Login")

class CreateNoteForm(FlaskForm):
    pass

class UpdateNoteForm(FlaskForm):
    pass