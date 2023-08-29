import matplotlib.pyplot as plt

from random_walks import RandomWalk

rw = RandomWalk()
rw.fill_walk()

point_numbers = list(range(rw.num_points))
# plt.plot(rw.x_values, rw.y_values, "o", markersize=1 )
fig, axes = plt.subplots(figsize=(15,9), dpi=128)
axes.scatter(rw.x_values, rw.y_values, c = point_numbers, cmap=plt.cm.Blues, s=10)
plt.grid(True)
plt.show()