from flask_wtf import FlaskForm
from flask_wtf.file import FileField, FileAllowed

from wtforms import StringField, SubmitField
from wtforms.validators import DataRequired, Length

class Upload_Image_Form(FlaskForm):

    image = FileField("Upload Your Image", validators = [DataRequired(), FileAllowed(["jpeg", "jpg", "png"])])
    message = StringField("Message", validators=[Length(max = 32)])
    submit = SubmitField("Upload")