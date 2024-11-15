Overview : 

This C++ program efficiently finds the K-th largest element in an array using a partition-based approach (similar to QuickSort) and prints the K-th largest element along with all the elements larger than it. The logic ensures optimal performance by focusing on relevant sections of the array.

How It Works : 

Priority Function:

Partitions the array using a pivot element.
Places elements smaller than or equal to the pivot on its left and elements larger than the pivot on its right.
Returns the index of the pivot after partitioning.
 
Select Function:

Iteratively narrows down the range of the array to find the K-th largest element.
Utilizes the priority function to focus on the section containing the K-th largest element.

Main Function:

Reads an array of integers and the value of K from the user.
Converts K-th largest index into the equivalent index for partitioning.
Calls the select function to find and print the K-th largest value and the top K elements.

Input Format  :
 
Number of Elements (n):
Total number of elements in the array.
Array Elements:
Space-separated integers representing the elements of the array.

K Value:

The position (1-based index) for the largest element to find (e.g., 1 for the largest, 2 for the second-largest).

Output Format  :

The K-th largest element.
All the elements larger than the K-th largest.