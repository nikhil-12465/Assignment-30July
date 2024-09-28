Aim
To implement a queue data structure that supports the basic operations of creation, enqueue (push), and dequeue (pop), allowing for First In First Out (FIFO) access to elements.


Working :-

Queue Structure:

A queue can be implemented using an array or a linked list. This description will focus on the array implementation.
The queue consists of:
An array to store the elements.
Two integers: front (to track the index of the front element) and rear (to track the index of the last element).

Creation:

Initialize an empty queue by setting front to 0 and rear to -1, indicating that the queue is currently empty.
Enqueue (Push) Operation:


To add an element to the queue:

Check if the queue is full (i.e., if rear is equal to the maximum size of the queue minus one). If it is full, print an error message.
If not full, increment the rear index and place the new element at the rear index of the array.

Dequeue (Pop) Operation:


To remove the front element from the queue:
Check if the queue is empty (i.e., if front is greater than rear). If it is empty, print an error message.
If not empty, retrieve the element at the front index, increment the front index to remove the element from the queue, and return the value.

Basic Operations:

isEmpty: Check if the queue is empty by verifying if front is greater than rear.
isFull: Check if the queue is full by comparing rear with the maximum size minus one.