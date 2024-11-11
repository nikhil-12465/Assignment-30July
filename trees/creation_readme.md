# Binary Tree Creation Program in C++

This program implements a basic binary tree creation in C++, where each node can have a left and right child. The user is prompted to enter values for each node, and manually specify if they want to add a left or right child for each node, enabling the creation of custom tree structures.

## How It Works

### Structure and Functions

- **Struct `node`**: Represents each node in the tree, containing:
  - `val`: Value of the node.
  - `parent`: Pointer to the parent node.
  - `left` and `right`: Pointers to the left and right child nodes, respectively.

- **Function `create`**: Recursively builds the tree by:
  - Prompting the user to enter the value for each node.
  - Asking if the user wants to add a left child, and if yes, creating a new node for the left child and recursively calling `create` for that child.
  - Asking if the user wants to add a right child, and if yes, creating a new node for the right child and recursively calling `create` for that child.
  - This function allows the user to customize the binary tree structure.  