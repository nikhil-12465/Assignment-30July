import matplotlib.pyplot as plt
x = [1,2,3,4,5,6,7,8,9,10,11,12,13,14]
y = [1,3,7,15,31,63,127,255,511,1023,2047,4095,8191,16383]

plt.figure(figsize=(10, 6))
plt.plot(x,y,label='TEST',color='m', marker='.', markersize=20, markeredgecolor='black', markerfacecolor='red')
plt.xlabel('x-axis')
plt.ylabel('y-axis')
plt.title('Customizing Line Chart')
plt.grid(True)
plt.legend()
plt.show()

