diifrent sorting algorithm:


1. Bubble Sort
Aim: To repeatedly compare adjacent elements in an array and swap them if they are in the wrong order, effectively "bubbling" larger elements to the end of the array.

Working:

Iterate through the array multiple times.
Compare each pair of adjacent elements.
If the first element is greater than the second, swap them.
Repeat until no swaps are needed, indicating the array is sorted.
2. Insertion Sort
Aim: To build a sorted array one element at a time by repeatedly taking the next element from the unsorted part and inserting it into the correct position in the sorted part.

Working:

Start from the second element (consider the first element as sorted).
Take the next element and compare it with the elements in the sorted part.
Shift all larger elements to the right and insert the current element in its correct position.
Repeat until the entire array is sorted.
3. Selection Sort
Aim: To divide the array into a sorted and an unsorted part, repeatedly selecting the smallest (or largest) element from the unsorted part and moving it to the sorted part.

Working:

Iterate over the array.
For each position, find the minimum element in the unsorted part.
Swap it with the element at the current position.
Move the boundary between sorted and unsorted parts one position forward.
Repeat until the array is fully sorted.
4. Merge Sort
Aim: To divide the array into halves, recursively sort each half, and then merge the sorted halves to produce the final sorted array.

Working:

If the array has one or no elements, it is already sorted.
Split the array into two halves.
Recursively apply merge sort on both halves.
Merge the two sorted halves into a single sorted array.
5. Radix Sort (for numbers)
Aim: To sort integers by processing individual digits, starting from the least significant digit to the most significant digit.

Working:

Find the maximum number to determine the number of digits.
For each digit (starting from the least significant):
Use a stable sorting algorithm (like counting sort) to sort the array based on the current digit.
Repeat until all digits are processed.
For Strings
The working principles remain similar, but when sorting strings, comparisons are typically based on lexicographical order rather than numeric value.

Bubble, Insertion, and Selection Sort: Compare strings using standard comparison operators, which check character by character based on their ASCII values.

Merge Sort: Split strings into halves and merge them based on lexicographical order.

Radix Sort: Process strings character by character, using their ASCII values as keys, typically from the least significant character to the most significant.