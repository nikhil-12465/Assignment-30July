README: Dynamic Binary Tree Creation with Parent Pointers

Overview
This C++ program dynamically creates a binary tree where:

Each node has:
A value (val).
A pointer to its parent.
Pointers to its left and right children.

The program uses a recursive approach to construct the tree, allowing the user to interactively specify the structure by deciding whether to add left or right children at each step.

How It Works

Node Structure:

Each node contains:

val: The integer value of the node.
parent: Pointer to the parent node.
left: Pointer to the left child.
right: Pointer to the right child.

Key Functions:

create(node*& root):
Recursively builds the binary tree.

Prompts the user to:
Enter the value of the current node.
Decide whether to add left or right children.
Automatically links child nodes to their parent.

Main Function:

Initializes the root node with no parent.
Calls the create function to start building the tree.


Input Format
For each node, the program asks:
Value of the Node: Enter an integer value.

Left Child Decision: Enter 'y' (yes) or 'n' (no) to decide whether to add a left child.

Right Child Decision: Enter 'y' (yes) or 'n' (no) to decide whether to add a right child.


Output Format
The program does not display the tree but dynamically creates it in memory based on the input.