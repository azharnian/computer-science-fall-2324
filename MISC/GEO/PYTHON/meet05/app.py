from flask import Flask, render_template, request, redirect, url_for, session
from datetime import timedelta

user = {
    'username' : 'admin',
    'password' : '123456'
}

app = Flask(__name__)
app.config["SESSION_PERMANENT"] = False
app.config["PERMANENT_SESSION_LIFETIME"] = timedelta(seconds=5)
# app.config["SESSION_TYPE"] = "filesystem"
app.config["SECRET_KEY"] = "0a9163695702438c5b86"

@app.route('/')
def index():
    if session.get('user'):
        return render_template('index.html')

    return redirect('login')

@app.route('/login', methods=['GET', 'POST'])
def login():
    if session.get('user'):
        return redirect('index')

    if request.method == 'POST':
        username = request.form.get('username')
        password = request.form.get('password')

        if username == user['username'] and password == user['password']:
            session['user'] = username
            return redirect('index')
        
    return render_template('login.html')

@app.route('/logout')
def logout():
    if session.get('user'):
        session.pop('user', None)
    return redirect('login')

if __name__ == '__main__':
    app.run(debug=True)