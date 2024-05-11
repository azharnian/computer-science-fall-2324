from flask import Flask, request, render_template
import joblib

app = Flask(__name__)
model = joblib.load('salary_prediction_model.pkl')

# routes
@app.route("/")
def index():

    return '<h1>Hello, flask!</h1>'

@app.route("/predict")
def predict():
    years = request.args.get("years")
    if years:
        prediction = model.predict([
            [years]
        ])

        res = prediction[0]
        return f'<h1>Your Salary is {res:.2f}</h1>'
    return '<h1>No data salary</h1>'

@app.route("/html")
def html():
    years = request.args.get("years")
    if years:
        prediction = model.predict([
            [years]
        ])
        res = f"{prediction[0]:.2f}"
        return render_template('predict.html', res=res)
    return render_template('predict.html')

app.run(debug=True)