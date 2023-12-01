from flask_wtf import FlaskForm
from flask_wtf.file import FileField, FileAllowed
from wtforms import StringField, SubmitField,TextAreaField
from wtforms.validators import DataRequired

class CreatePostForm(FlaskForm):
    post_pic            = FileField("picture", validators=[DataRequired(), FileAllowed(["jpg", "png", "jpeg"])])
    caption             = TextAreaField("caption")
    submit              = SubmitField("post")

class EditPostForm(FlaskForm):
    caption             = StringField("caption")
    submit              = SubmitField("update post")