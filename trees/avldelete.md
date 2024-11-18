AVL Tree Implementation with Deletion in C++ :

This project demonstrates the implementation of an AVL Tree in C++, focusing on the deletion operation. AVL trees are self-balancing binary search trees that ensure the difference in height (balance factor) between the left and right subtrees of any node does not exceed 1.

Features  :


Key Functionalities

Node Structure: Each node in the AVL tree stores:

val: The value of the node.
parent: Pointer to the parent node.
left: Pointer to the left child.
right: Pointer to the right child.

height: The height of the node, updated dynamically to maintain balance.

Height and Balance Management:

getHeight(node* n): Returns the height of a node.

updateHeight(node* n): Updates the height of a node based on its children's heights.

getBalance(node* n): Calculates the balance factor of a node.

Rotations for Balancing:

rightRotate(node* y): Performs a right rotation.
leftRotate(node* x): Performs a left rotation.

Handles additional cases of left-right and right-left rotations as part of balancing.

Deletion:

deleteNode(node* root, int val): Deletes a node from the tree while maintaining balance. It handles:
Nodes with no children (leaf nodes).
Nodes with one child.
Nodes with two children (replacing with in-order successor).
Tree Traversal:

preOrder(node* root): Prints the tree in pre-order traversal.