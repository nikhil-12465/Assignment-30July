# Radix Sort Program with Linked List in C++

This program implements the Radix Sort algorithm to sort a linked list of integers in ascending order. It uses queues to store elements at each significant digit position for sorting.

## How It Works

The program sorts the linked list by distributing elements into queues based on each digit's place value, starting from the least significant digit (LSD) to the most significant digit (MSD). Each pass through the list sorts by the next highest place value until the list is fully sorted.

### Key Functions

- **insert**: Inserts a new node with a specified value at the end of the linked list.
- **findMax**: Finds the maximum value in the list to determine the number of digits to sort.
- **countDigits**: Counts the number of digits in the maximum value.
- **radixSort**: Sorts the linked list using Radix Sort, storing nodes in queues for each digit value and combining them after each digit position.
- **printList**: Outputs the elements of the linked list.

## Code Structure

- **main**: Takes user input, calls the sorting function, and displays both the original and sorted lists.

## How to Use the Program

Explanation of Radix Sort
Radix Sort is an efficient, non-comparative sorting algorithm that sorts elements by processing individual digits. It performs well when the number of digits (d) is significantly less than the number of elements (n), as its time complexity is 
O(d×n).

Time Complexity
Best, Average, and Worst: O(d * n), where d is the number of digits and n is the number of elements.

Space Complexity
O(n + k), where k is the range of digit values (0-9).