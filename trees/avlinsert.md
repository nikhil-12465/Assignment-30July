AVL Tree Implementation in C++:

This project is an implementation of an AVL Tree in C++. An AVL tree is a self-balancing binary search tree that ensures the height difference (balance factor) between left and right subtrees of any node is at most 1. This implementation includes functionality for inserting nodes and balancing the tree using rotations (left, right, left-right, and right-left).


Features:

Node Structure: Each node in the AVL tree stores:

Value (val)
Parent pointer (parent)
Left and right child pointers (left, right)
Height (height), which is updated dynamically to maintain balance.
Rotations: 
Includes the following tree rotation algorithms to rebalance the AVL tree:

Right Rotation
Left Rotation
Left-Right Rotation
Right-Left Rotation

Balancing: Ensures the tree remains balanced after every insertion by calculating the balance factor and applying appropriate rotations.

Pre-order Traversal: Displays the tree structure in a depth-first manner.

Height Management:

getHeight(node* n): Returns the height of a node.

updateHeight(node* n): Updates a node's height based on its children.

Balance Factor:

getBalance(node* n): Calculates the balance factor of a node.

Rotations:

rightRotate(node* y): Rotates a node to the right.

leftRotate(node* x): Rotates a node to the left.

Insertion:

insert(node* root, node* parent, int val): Recursively inserts a value, updates heights, calculates balance factors, and performs rotations to keep the tree balanced.

Pre-order Traversal:

preOrder(node* root): Prints the values of the tree in pre-order traversal.

Main Function


Accepts values from the user to insert into the AVL tree.
After each insertion, balances the tree if necessary.
Displays the pre-order traversal of the final tree structure.

