Tower of Hanoi Solver:

This project demonstrates the recursive solution to the Tower of Hanoi problem, implemented in C++. The program calculates the steps required to move disks from one rod to another and provides the total number of recursive calls made during the solution.


Introduction :-

The Tower of Hanoi is a classic mathematical problem where the objective is to move a stack of disks from one rod to another, following specific rules:

Only one disk can be moved at a time.

A disk can only be placed on top of a larger disk or an empty rod.

The goal is to move all disks from the starting rod to the target rod, using an auxiliary rod.


Features :-

Recursive solution to the Tower of Hanoi problem
Prints each step for moving disks from the source rod to the target rod
Counts the total recursive calls made during the solution


Two modes:
User-specified number of disks (interactive mode)
Automatic iteration through disk counts from 1 to 14 (test mode)
Code Structure


The code is organized as follows:

tofhonoi function: The recursive function that solves the Tower of Hanoi problem. It takes the number of disks, source rod, auxiliary rod, target rod, and a counter for recursive calls as parameters.
main function: Manages user input, initiates the tofhonoi function, and displays the results.


How it Works
The tofhonoi function uses a recursive approach:

It first moves n-1 disks from the source rod (F) to the auxiliary rod (A).
It moves the nth disk directly from the source rod (F) to the target rod (T).
Finally, it moves the n-1 disks from the auxiliary rod (A) to the target rod (T).
Each recursive call is counted, and the total is displayed after completing the moves.