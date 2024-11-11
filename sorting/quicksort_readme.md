# Quick Sort Program in C++

This program implements the Quick Sort algorithm in C++ to sort a list of integers in ascending order.

## How It Works

The program uses the Quick Sort algorithm, which is a divide-and-conquer sorting method. It selects a "pivot" element, partitions the array around this pivot, and recursively sorts the two resulting subarrays.

### Key Functions

- **partition**: Rearranges the elements in the array based on the chosen pivot and returns the pivot's final position.
- **quick_sort**: Recursively sorts the array by dividing it around the pivot obtained from the `partition` function.

## Code Structure

- **main**: Takes user input, calls the sorting function, and displays the sorted list.


Explanation of Quick Sort

Quick Sort is an efficient, in-place sorting algorithm with an average time complexity of O(n log n). It can be faster than other O(n log n) algorithms like Merge Sort for larger datasets due to its in-place nature, which reduces memory usage.

Time Complexity
Best: O(n log n)
Average: O(n log n)
Worst: O(n^2) (occurs when the pivot repeatedly divides the array into uneven halves)

Space Complexity
O(log n) due to recursion stack usage in the best case.
