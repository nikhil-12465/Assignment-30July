Aim
To implement a stack data structure that supports the basic operations of creation, push, and pop, allowing for Last In First Out (LIFO) access to elements.


Working

Stack Structure:

A stack can be implemented using an array or a linked list. In this description, we'll focus on the array implementation.
The stack consists of:
An array to store the elements.
An integer (top) to keep track of the index of the top element.

Creation:

Initialize an empty stack by setting the top index to -1, indicating that the stack is currently empty.

Push Operation:

To add an element to the stack:
Check if the stack is full (i.e., if the top index is equal to the maximum size of the stack minus one). If it is full, print an error message.
If not full, increment the top index and place the new element at the top index of the array.

Pop Operation:

To remove the top element from the stack:
Check if the stack is empty (i.e., if top is -1). If it is empty, print an error message.
If not empty, retrieve the element at the top index, decrement the top index to remove the element from the stack, and return the value.

Basic Operations:

isEmpty: Check if the stack is empty by verifying if the top index is -1.
isFull: Check if the stack is full by comparing the top index with the maximum size minus one.