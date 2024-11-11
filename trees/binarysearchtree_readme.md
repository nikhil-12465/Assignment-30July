# Binary Search Tree (BST) Implementation in C++

This program implements a simple Binary Search Tree (BST) with insertion and in-order traversal functionalities in C++. The tree structure allows for ordered data storage, where for any given node, values in the left subtree are less than the node, and values in the right subtree are greater.

## How It Works

### Structure and Functions

- **Struct `node`**: Represents a node in the tree, containing the `val` (value of the node), pointers to its `parent`, `left`, and `right` child nodes.
- **Function `create`**: Recursively inserts nodes into the BST based on the input values. If the tree is empty, it initializes the root. The function maintains BST properties by placing nodes to the left if the new value is less than the current node and to the right if greater.
- **Function `inorderTraversal`**: Traverses the BST in an in-order sequence (left, root, right), printing the nodes in ascending order.


