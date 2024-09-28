Aim of the Code:
The aim of the provided code is to calculate the memory address of a specific element in a 2D array based on two different memory storage schemes: column-major order and row-major order.

Working Algorithm:
Input Dimensions:
The user is prompted to enter the number of rows (m) and columns (n) for a 2D array.

Array Initialization:

A 2D array a[m][n] is created, and the user is asked to input the values for each element in the array.
Base Address:

A base address (base_value) is defined to simulate where the array starts in memory (e.g., 100).

Address Calculation:

The user is prompted to enter the row (i) and column (j) of the element for which the address needs to be calculated.
The size of each element in the array is calculated using sizeof(a[0][0]).

Memory Address Formula:

For Column-Major Order:
The formula to calculate the address is:
address=((j×m)+i)×c+base_value


For Row-Major Order:
The formula to calculate the address is:
address=((i×n)+j)×c+base_value

Output:
The calculated memory address for the specified element is printed.