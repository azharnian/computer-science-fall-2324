from flask import Flask, render_template, request, redirect

app = Flask(__name__, template_folder='views')

@app.route('/', methods=['GET', 'POST'])
def index():
    if request.method == 'POST':
        username = request.form.get('username')
        password = request.form.get('password')

        if username == 'admin' and password == '123456':
            return render_template('index.html', message='success')
    return render_template('index.html')

@app.route('/search', methods=['GET', 'POST'])
def search():
    # query = request.args.get('search')
    # if query:
    #     return redirect(f'http://www.google.com/search?q={query}')
    if request.method == 'POST':
        query = request.form.get('search')
        return redirect(f'http://www.google.com/search?q={query}')
    return render_template('search.html')

if __name__ == '__main__':
    app.run(debug=True)