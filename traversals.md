Overview

This program implements a Binary Tree and demonstrates various tree traversal techniques. The tree is dynamically created based on user input, and the following traversals are supported:

Depth-First Traversal (DFT):

Recursive Preorder Traversal
Iterative Preorder Traversal
Inorder Traversal
Postorder Traversal

Breadth-First Traversal (BFT):

Iterative Level Order Traversal
Functionalities

1. Binary Tree Creation
Function: create(node*& root)
Dynamically constructs the binary tree based on user inputs.
The user specifies whether to add left or right child nodes at each step.

2. Depth-First Traversal (DFT)
Preorder Traversal:
Recursive: Implemented in dftr(node*& root)
Order: Root → Left → Right

Iterative: Implemented in dfti(node*& root)
Uses a stack to emulate recursive behavior.

Inorder Traversal:
Recursive: Implemented in inordertraversal(node*& root)
Order: Left → Root → Right
Outputs elements in non-decreasing order for Binary Search Trees.

Postorder Traversal:
Recursive: Implemented in postordertraversal(node*& root)
Order: Left → Right → Root

3. Breadth-First Traversal (BFT)
Level Order Traversal:
Iterative: Implemented in bft(node*& root)
Uses a queue to visit nodes level by level (top to bottom, left to right).