# Binary Tree Operations in C++

---

## Overview

This C++ program provides a comprehensive implementation of a **Binary Tree** with the following functionalities:

1. **Create a Binary Tree**: Dynamically build a tree by specifying node values and their left/right child relationships.
2. **Insert a Node**: Insert a new node into the binary tree in a level-order manner (breadth-first).
3. **Delete a Node**: Delete a specified node from the binary tree and maintain its structure by replacing it with the deepest node.
4. **Preorder Traversal (DFT)**: Display all nodes in a preorder traversal (Root -> Left -> Right).

---

## Features

1. **Dynamic Tree Creation**:
   - Users can interactively build the binary tree by deciding whether to add left or right children for each node.
   
2. **Level-Order Insertion**:
   - Ensures that new nodes are inserted at the first available position to maintain a complete binary tree structure.
   
3. **Node Deletion**:
   - Deletes a specified node and replaces it with the deepest node to preserve the tree's structure.
   
4. **Preorder Traversal (DFT)**:
   - Displays the tree's nodes in preorder (Root -> Left -> Right) for easy visualization.

---

## How It Works

### Node Structure

Each node in the binary tree contains:

- `val`: An integer value representing the node's data.
- `parent`: A pointer to the parent node.
- `left`: A pointer to the left child node.
- `right`: A pointer to the right child node.

### Functions

1. **`create(node*& root)`**:
   - Recursively builds the binary tree.
   - Prompts the user to enter the value of each node.
   - Asks the user whether to add left and/or right children (`y` for yes, `n` for no).
   - Establishes parent-child relationships based on user input.

2. **`dft(node*& root)`**:
   - Performs a **Preorder Traversal** (Depth-First Traversal).
   - Visits the root node first, then recursively traverses the left and right subtrees.
   - Outputs the value of each visited node.

3. **`insert(node*& root, int& value)`**:
   - Inserts a new node into the binary tree in a level-order manner.
   - Uses a queue to perform a breadth-first search to find the first available position.
   - Ensures the tree remains complete after insertion.

4. **`deletDeepest(node* root, node* dNode)`**:
   - Deletes the deepest node (`dNode`) from the binary tree.
   - Traverses the tree to locate and remove the deepest node.

5. **`deletion(node*& root, int target)`**:
   - Deletes a node with the specified value (`target`) from the binary tree.
   - Finds the node to be deleted and the deepest node in the tree.
   - Replaces the target node's value with the deepest node's value.
   - Calls `deletDeepest` to remove the deepest node, maintaining the tree's structure.

---

## Input Format

1. **Tree Creation**:
   - **Value Input**: Enter the integer value for each node.
   - **Child Decisions**:
     - **Left Child**: Enter `'y'` to add a left child or `'n'` to skip.
     - **Right Child**: Enter `'y'` to add a right child or `'n'` to skip.

2. **Node Insertion**:
   - **Value Input**: Enter the integer value of the node you wish to insert into the binary tree.

3. **Node Deletion**:
   - **Target Value**: Enter the integer value of the node you wish to delete from the binary tree.

---

## Output Format

1. **Preorder Traversal**:
   - Displays the values of the nodes in preorder sequence (Root -> Left -> Right).
   - Shown after tree creation, after insertion, and after deletion.

2. **Deletion Confirmation**:
   - Indicates whether the specified node was successfully deleted.

---