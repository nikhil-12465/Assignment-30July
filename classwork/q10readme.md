Aim
To measure and display the time taken to search for a specified number in an array of increasing size, ranging from 50 to 500,000,000.

Working
Input: The program prompts the user to enter a number (num).
Array Initialization:
It initializes an array arr of length size, starting from 50 and increasing by a factor of 10 in each iteration (i.e., 50, 500, 5000, ..., 500,000,000).
The array is filled with random numbers between 0 and 100,000,000.
Searching: The program attempts to find the user-specified number in the array:
It uses a loop to compare each element of the array with the input number.
If a match is found, the loop breaks.
Timing: The duration of the search is measured using high-resolution clock timing:
The start time is recorded before the search begins.
The end time is recorded after the search ends.
The difference between the two timestamps is calculated and printed in nanoseconds.
Output: The program outputs the current size of the array and the time taken to search for the number.

