import numpy as np
import matplotlib.pyplot as plt

# Generate data points
# np.random.seed(0)
x = np.random.rand(50) * 10
y = 2 * x + 1 + np.random.randn(50) * 2  # Simulate linear relationship with some noise

# Perform linear regression
coefficients = np.polyfit(x, y, 1)  # Fit a 1st-degree polynomial (linear regression)
slope, intercept = coefficients

# Create predicted y values using the regression line equation
y_predicted = slope * x + intercept

# Plot the data points and regression line
plt.scatter(x, y, label='Data')
plt.plot(x, y_predicted, color='r', label='Regression Line')
plt.xlabel('X')
plt.ylabel('Y')
plt.title('Linear Regression with NumPy')
plt.legend()
plt.show()

print(f"Slope (Coefficient): {slope}")
print(f"Intercept: {intercept}")
