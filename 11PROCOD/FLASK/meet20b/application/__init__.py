from flask import Flask
from flask_sqlalchemy import SQLAlchemy

from application.project.settings import Settings

db = SQLAlchemy()

def create_app(config_class=Settings):
    app = Flask(__name__)
    app.config.from_object(Settings)

    db.init_app(app)

    from application.project.routes import project
    from application.users.routes import users
    from application.posts.routes import posts

    app.register_blueprint(project)
    app.register_blueprint(users, url_prefix='/users')
    app.register_blueprint(posts, url_prefix='/posts')

    return app