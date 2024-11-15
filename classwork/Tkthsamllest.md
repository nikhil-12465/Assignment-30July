Overview:

This program is a C++ implementation to find the K-th smallest element in an array using a modified quicksort approach (Partition-based selection). It leverages the partitioning logic from the QuickSort algorithm but focuses only on the part of the array where the K-th smallest element might exist, making it efficient for this purpose.

How It Works:

Partition Function:

Divides the array around a pivot element.
Elements smaller than or equal to the pivot are placed on its left, and elements greater than the pivot are placed on its right.
Returns the final position of the pivot element.

Select Function:

Iteratively partitions the array, narrowing down the search space to find the K-th smallest element.
Stops when the pivot's position matches the desired K-th index.
Main Function:

Reads an array of integers and the desired K value from the user.
Calls the select function to find and print the K-th smallest value.
Input Format
Number of Elements (n): Total number of elements in the array.
Array Elements: Space-separated integers representing the elements of the array.
K Value: The position (1-based index) of the smallest element to find.