from application import app
from application.utils import login_required

@app.route("/", methods=["GET", "POST"])
@login_required
def index():
    pass

@app.route("/delete/<int:note_id>")
@login_required
def delete(note_id):
    pass

@app.route("/update/<int:note_id>", methods=["GET", "POST"])
@login_required
def update(note_id):
    pass
    
@app.route("/login", methods=["GET", "POST"])
def login():
    return "OK"

@app.route("/register", methods=["GET", "POST"])
def register():
    pass

@app.route("/logout")
@login_required
def logout():
    pass