from flask_login import UserMixin

from application import db
from datetime import datetime

class User(db.Model, UserMixin):
    __tablename__   = "users"
    id              = db.Column(db.Integer, primary_key = True)
    username        = db.Column(db.String(128), nullable = False)
    password        = db.Column(db.String(128), nullable = False)
    fullname        = db.Column(db.String(128), nullable = False)
    email           = db.Column(db.String(128), nullable = False)
    profile_pic     = db.Column(db.String(128), default="default.jpg")
    bio             = db.Column(db.String(128))
    join_date       = db.Column(db.DateTime, default=datetime.utcnow)
    status          = db.Column(db.Boolean, default=True)
    
    following_users = db.relationship("Relation", foreign_keys="Relation.id_following", backref="following", lazy=True)
    follower_users  = db.relationship("Relation", foreign_keys="Relation.id_follower", backref="follower", lazy=True)
    posts           = db.relationship("Post", backref="posts_owner", lazy=True)
    comments        = db.relationship("Comment", backref="comments_owner", lazy=True)
    likes           = db.relationship("Like", backref="likes_owner", lazy=True)

class Relation(db.Model):
    __tablename__   = "relations"
    id              = db.Column(db.Integer, primary_key = True)
    id_follower     = db.Column(db.Integer, db.ForeignKey("users.id"), nullable = False)
    id_following    = db.Column(db.Integer, db.ForeignKey("users.id"), nullable = False)
    status          = db.Column(db.Boolean, default=True)
    relation_date   = db.Column(db.DateTime, default=datetime.utcnow)
