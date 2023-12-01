from flask import Blueprint

posts = Blueprint("posts", __name__)

@posts.route('/edit/<int:id>', methods=['GET', 'POST'])
def edit_post(id):
    pass