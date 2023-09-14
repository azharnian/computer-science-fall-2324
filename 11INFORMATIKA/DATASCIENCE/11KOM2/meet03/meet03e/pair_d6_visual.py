from plotly.graph_objs import Bar, Layout
from plotly import offline

from die import Die

die_one = Die()
die_two = Die()

results = []

for roll_num in range(1000):
    res_one, res_two = die_one.roll_die(), die_two.roll_die()
    results.append((res_one, res_two))

# print(results)

freqs = {}
for i in range(1, die_one.sides + 1):
    for j in range(1, die_two.sides + 1):
        freq = results.count((i, j))
        freqs[(i, j)] = freq

# print(freqs)
x_values = list(freqs.keys())
y_values = list(freqs.values())
# print(x_values)
# print(y_values)