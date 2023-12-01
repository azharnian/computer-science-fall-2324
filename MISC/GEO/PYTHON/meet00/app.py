from flask import Flask, render_template, request

app = Flask(__name__)

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/about')
def about():
    return 'About Us!'

# @app.route('/hello')
# @app.route('/hello/<string:name>')
# def hello(name=''):
#     # if not name:
#     #     name = "World"
#     return render_template('hello.html', name=name)

@app.route('/hello')
def hello():
    name = request.args.get('to')
    return render_template('hello.html', name=name)

app.run(debug=True)