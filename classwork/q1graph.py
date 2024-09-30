import matplotlib.pyplot as plt
x = [50,500,5000,50000,500000]
y = [0,0,0,0,0]

plt.figure(figsize=(10, 6))
plt.plot(x,y,label='TEST',color='m', marker='.', markersize=20, markeredgecolor='black', markerfacecolor='red')
plt.xlabel('x-axis')
plt.ylabel('y-axis')
plt.title('Customizing Line Chart')
plt.grid(True)
plt.legend()
plt.show()

