import matplotlib.pyplot as plt
import numpy as np

hours_studied = [2, 3, 4, 5, 6, 7, 8]
exam_scores = [65, 70, 75, 80, 85, 90, 95]

hours_np = np.array(hours_studied)
scores_np = np.array(exam_scores)

slope = (exam_scores[-1]-exam_scores[0])/(hours_studied[-1]-hours_studied[0])
intercept = exam_scores[-1]-(slope*hours_studied[-1])

slope_np, intercept_np = np.polyfit(hours_studied, exam_scores, 1)

plt.scatter(hours_studied, exam_scores, label='Data')
yi, yf = exam_scores[0],exam_scores[-1]
xi, xf = hours_studied[0],hours_studied[-1]
plt.plot([xi, xf], [yi, yf], color="red", label="Linear Line")
plt.xlabel('Jam Belajar')
plt.ylabel('Nilai Ujian')
plt.title('Hubungan Jam Belajar dan Nilai Ujian')

plt.grid(True)
plt.show()