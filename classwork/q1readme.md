Aim of the Code:
The aim of the code is to measure the time taken to perform a binary search for a given number num in arrays of varying sizes. The array size starts at 50 and increases by a factor of 10 in each iteration, stopping at 500 million. However, the binary search logic has some issues and is incomplete.

Working Algorithm:

Input Reading:

The code prompts the user to input a number num to search for within the array.


Loop Over Array Sizes:

A loop runs until the array size reaches 500 million, starting with an initial array size of 50.
In each iteration, the array size increases by a factor of 10.


Binary Search Setup:

For each array size, a binary search is performed, but the current implementation does not initialize the array with actual values. It only declares an array of the specified size.
Binary Search:

The code attempts to perform a binary search by setting up the low, high, and mid pointers to find the element num in the array. However, there is an issue in the condition inside the binary search loop because it does not correctly compare arr[mid] with num. It just breaks out of the loop after the first comparison without adjusting the search range (low and high).

Time Measurement:

For each array size, the time taken to perform the binary search is measured using the high_resolution_clock from the chrono library.
The duration (in nanoseconds) is printed along with the corresponding array size.

Array Size Increment:

The array size is multiplied by 10 in each iteration, and the loop continues until it reaches 500 million.