from app import db
from datetime import datetime


class User(db.Model):
    __tablenames__ = "users"
    id = db.Column(db.Integer, primary_key=True)
    username = db.Column(db.String(128), nullable=False)
    password = db.Column(db.String(128), nullable=False)

class Note(db.Model):
    __tablenames__ = "notes"
    id = db.Column(db.Integer, primary_key=True)
    note = db.Column(db.String(256), nullable=False)
    created_date = db.Column(db.Datetime, nullable=False, default=datetime.now())
    created_by = db.Column(db.Integer, db.ForeignKey("user.id"), nullable=False)