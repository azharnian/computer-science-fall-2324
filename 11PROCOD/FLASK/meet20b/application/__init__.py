from flask import Flask
from flask_sqlalchemy import SQLAlchemy
from flask_migrate import Migrate
from flask_login import LoginManager
from flask_cors import CORS

from application.project.settings import Settings

db = SQLAlchemy()
migrate = Migrate()
login_manager = LoginManager()
cors = CORS()

def create_app(config_class=Settings):
    app = Flask(__name__, template_folder="views")
    app.config.from_object(Settings)

    db.init_app(app)
    migrate.init_app(app, db)
    login_manager.init_app(app)
    login_manager.login_view = "project.login"
    login_manager.login_message_category = "info"
    cors.init_app(app)

    from application.project.routes import project
    from application.users.routes import users
    from application.posts.routes import posts
    from application.apis.routes import apis

    app.register_blueprint(project)
    app.register_blueprint(users, url_prefix='/users')
    app.register_blueprint(posts, url_prefix='/posts')
    app.register_blueprint(apis, url_prefix='/apis')

    return app