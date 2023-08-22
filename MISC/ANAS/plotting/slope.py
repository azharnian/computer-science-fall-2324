# import numpy as np
import matplotlib.pyplot as plt

# Data contoh: Jam belajar dan nilai ujian
# hours_studied = np.array([2, 3, 4, 5, 6, 7, 8])
# exam_scores = np.array([65, 70, 75, 80, 85, 90, 95])
hours_studied = [2, 3, 4, 5, 6, 7, 8]
exam_scores = [65, 70, 75, 80, 85, 90, 95]

# Menghitung gradien (slope) dan y-intercept dari garis linear
# slope, intercept = np.polyfit(hours_studied, exam_scores, 1)

slope = (exam_scores[-1]-exam_scores[0])/(hours_studied[-1]-hours_studied[0])

intercept = exam_scores[-1]-(slope*hours_studied[-1])

# Membuat garis linear dari hasil perhitungan gradien dan y-intercept
# linear_line = slope * hours_studied + intercept

# Menampilkan data asli dan garis linear pada plot
plt.scatter(hours_studied, exam_scores, label='Data')
# plt.plot(hours_studied, linear_line, color='red', label='Linear Line')
yi, yf = exam_scores[0],exam_scores[-1]
xi, xf = hours_studied[0],hours_studied[-1]
plt.plot([xi, xf], [yi, yf], color="red", label="Linear Line")
plt.xlabel('Jam Belajar')
plt.ylabel('Nilai Ujian')
plt.title('Hubungan Jam Belajar dan Nilai Ujian')
plt.legend()

for i, text in enumerate(hours_studied):
    plt.annotate(text, (hours_studied[i], exam_scores[i]+2))
# plt.grid(True)
plt.show()

print(f"Gradien (Slope): {slope}")
print(f"Y-Intercept: {intercept}")
