# Circular Queue Implementation in C++

This program implements a circular queue using a static array in C++. It supports basic queue operations such as `enqueue`, `dequeue`, and `display`. A circular queue is a data structure that allows elements to be added to the end and removed from the front in a circular manner, which maximizes the utilization of the allocated space.

## How It Works

The circular queue uses two pointers, `front` and `rear`, to keep track of the beginning and end of the queue:
- **Enqueue** adds an element at the position after `rear`, wrapping around to the beginning of the array if necessary.
- **Dequeue** removes an element from the `front` and adjusts the `front` pointer.
- The **Display** function iterates from `front` to `rear` to output all elements in the queue.

### Structure and Functions

- **Struct queue**: Holds the array for storing elements (`arr`), and two pointers (`front` and `rear`) initialized to `-1` to indicate an empty queue.
- **enqueue**: Adds an element to the rear of the queue. It also handles the case when the queue is full by checking if the next position of `rear` is `front`.
- **dequeue**: Removes an element from the front of the queue. It handles the case when the queue is empty by checking if `front` is `-1`.
- **display**: Prints all elements currently in the queue from `front` to `rear`.

