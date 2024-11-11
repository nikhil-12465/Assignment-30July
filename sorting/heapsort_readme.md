# Heap Sort Program in C++

This program implements the Heap Sort algorithm in C++ to sort an array of integers in ascending order.

## How It Works

The program first builds a max heap from the input array, then repeatedly extracts the maximum element (the root of the heap) and places it at the end of the array, reducing the heap's size each time. This process sorts the array in-place.

### Key Functions

- **heapify**: Maintains the max heap property for a given subtree.
- **buildHeap**: Builds a max heap from an unordered array.
- **heapSort**: Sorts the array using the Heap Sort algorithm.

## Code Structure

- **main**: Accepts input from the user, calls the sorting function, and displays the sorted array.

Explanation of Heap Sort

Heap Sort is a comparison-based sorting algorithm that uses a binary heap data structure. It has an average and worst-case time complexity of O(n log n), which makes it an efficient sorting algorithm for large datasets.

Time Complexity
Best: O(n log n)
Average: O(n log n)
Worst: O(n log n)

Space Complexity
O(1), as it is an in-place sorting algorithm.