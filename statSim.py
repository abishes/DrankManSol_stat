from math import sqrt
import numpy as np
from matplotlib import pyplot as plt
N = 1000
displacement=[]
for j in range(0,N):
    thita = np.random.randint(361, size=N)
    x = np.cos(thita)
    y = np.sin(thita)
    for i in range(0, N):
        x[i] = x[i-1] + x[i]
        y[i] = y[i-1] + y[i]
    displacement.append(sqrt(x[N-1]*x[N-1]+y[N-1]*y[N-1]))
print(f"Max distance is {max(displacement)} and average distance is {np.average(displacement)}")
plt.plot(x,y)
plt.show()