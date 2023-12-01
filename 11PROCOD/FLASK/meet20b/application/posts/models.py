from application import db
from datetime import datetime

class Post(db.Model):
    __tablename__   = "posts"
    id              = db.Column(db.Integer, primary_key = True)
    author_id       = db.Column(db.Integer, db.ForeignKey("users.id"), nullable = False)
    photo           = db.Column(db.String(128), nullable = False)
    caption         = db.Column(db.String(128), default="")
    status          = db.Column(db.Boolean, default=True)
    post_date       = db.Column(db.DateTime, default=datetime.utcnow)
   
    comments        = db.relationship("Comment", backref="commented", lazy=True)
    likes           = db.relationship("Like", backref="liked", lazy=True)


class Comment(db.Model):
    __tablename__   = "comments"
    id              = db.Column(db.Integer, primary_key = True)
    text            = db.Column(db.Text, nullable = False)
    commenter_id    = db.Column(db.Integer, db.ForeignKey("users.id"), nullable=False)
    post_id         = db.Column(db.Integer, db.ForeignKey("posts.id"), nullable=False)
    hidden          = db.Column(db.Boolean, default=False)
    comment_date    = db.Column(db.DateTime, default=datetime.utcnow)

class Like(db.Model):
    __tablename__   = "likes"
    id              = db.Column(db.Integer, primary_key = True)
    user_id         = db.Column(db.Integer, db.ForeignKey("users.id"), nullable = False)
    post_id         = db.Column(db.Integer, db.ForeignKey("posts.id"), nullable = False)
    status          = db.Column(db.Boolean, default=True)
    like_date       = db.Column(db.DateTime, default=datetime.utcnow)
