import os
from flask import Flask, render_template, flash

from forms.upload_image_form import Upload_Image_Form

from utils.saving import save_image
from utils.checking import check_human

app = Flask(__name__)
app.config["SECRET_KEY"] = "STILLSECRET"

@app.route("/", methods=["GET", "POST"])
def index():
    form = Upload_Image_Form()

    if form.validate_on_submit():

        image_file = save_image(form.image.data)
        if image_file:
            if check_human(image_file):
                os.remove(image_file)
                flash("Human Detected. Sorry, We can't continue the process", "danger")
            else:
                flash("No Human Detected, Image uploaded!", "success")

    return render_template("index.html", form=form)

if __name__ == "__main__":
    app.run(debug=True)