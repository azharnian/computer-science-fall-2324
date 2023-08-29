from plotly.graph_objs import Bar, Layout
from plotly import offline

from die import Die

die = Die()

results = []
for roll_num in range(1000):
    result = die.roll()
    results.append(result)

freqs = []
for value in range(1, die.num_sides+1):
    freq = results.count(value)
    freqs.append(freq)

x_values = list(range(1, die.num_sides+1))
data = [Bar(x=x_values, y=freqs)]

x_axis_config = {"title" : "Result"}
y_axis_config = {"title" : "Frequency of Result"}
my_layout = Layout(title="Results of rolling one D6 1000 times", xaxis=x_axis_config, yaxis=y_axis_config)

offline.plot({"data":data, "layout":my_layout}, filename="d6.html")