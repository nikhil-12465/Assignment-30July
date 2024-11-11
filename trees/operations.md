Code Explanation

Struct node: Defines each node in the tree, with pointers for the parent, left child, and right child.

Function create:

Recursively builds the binary tree.
The user is prompted to enter a value for each node and specify whether to add a left or right child.
Two counters, count1 and count2, are used to keep track of left and right child nodes respectively.

Function getDepth:

Calculates the tree's depth using a breadth-first traversal (level order traversal).
The depth is incremented with each level of the tree processed.

Function search:

Recursively searches for a node with a specified value and keeps track of the level.
Returns a pointer to the node if found, and nullptr if not.

Functions is_left and is_right:

Determine whether a node is the left or right child of its parent.

main Function:

Initializes the tree root and calls the create function.
Displays the total number of nodes, depth, and levels in the tree.
Prompts the user to enter a node value to check its level and whether it is a left or right child.