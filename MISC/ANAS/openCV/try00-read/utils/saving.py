import os
import secrets
from PIL import Image

from flask import current_app

def save_image(img_field):
    random_hex = secrets.token_urlsafe(10)
    _, f_ext = os.path.splitext(img_field.filename)
    image_fn = "images/"+random_hex+f_ext
    image_path = os.path.join(current_app.root_path, "static/", image_fn)

    image = Image.open(img_field)
    try:
        image.save(image_path)
    except Exception as e:
        return

    return image_path