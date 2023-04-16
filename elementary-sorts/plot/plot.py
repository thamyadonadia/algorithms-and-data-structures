import matplotlib.pyplot as plt
import numpy as np
import mpld3

sorts = ("Selection Sort", "Insertion Sort", "Bubble Sort", "Shaker Sort")
data = {"Nearly Sorted": (1, 4, 5, 8),
            "Reverse Sorted": (1, 4, 5, 8),
            "Sorted": (1, 4, 5, 8),
            "Random Sorted": (1, 4, 5, 8)}

x = np.arange(len(sorts)) # label locations
width = 0.20 # width of the bars
multiplier = 0

fig, ax = plt.subplots(layout = "constrained")

for attribute, measurement in data.items():
    offset = width * multiplier
    rects = ax.bar(x + offset, measurement, width, label = attribute)
    #ax.bar_label(rects)
    multiplier += 1

ax.set_ylabel("Time (seconds)")
ax.set_title("Time costed per elementary sort")
ax.set_xticks(ticks = x + width, labels = sorts)
ax.set_xlabel("Inputs")
ax.legend(loc='upper left', ncols=4)
ax.set_ylim(0, 100)
#plt.show()

mpld3.show(fig)

