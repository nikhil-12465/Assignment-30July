# Binary Tree Operations in C++

---

## Overview

This C++ program provides a comprehensive implementation of a **Binary Tree** with the following functionalities:

1. **Binary Tree Creation**: Dynamically build a tree with user input for node values and child relationships.
2. **Tree Depth Calculation**:
   - **Iterative**: Using level-order traversal.
   - **Recursive**: Using depth-first recursion.
3. **Node Search**: Locate a node by its value and determine its level.
4. **Child Identification**:
   - Check if a node is a left or right child of its parent.
5. **Leaf Node Display**: Print all the leaf nodes in the binary tree.
6. **Node Count**: Count the total number of nodes in the tree.

---

## Functions

### 1. **Binary Tree Creation**

#### Function: `create(node*& root, int& count1, int& count2)`
- Dynamically creates a binary tree based on user input.
- Tracks the count of left (`count1`) and right (`count2`) child nodes.
- Prompts the user to decide whether to add left or right children.

---

### 2. **Depth Calculation**

#### Function: `getDepth(node* root)`
- Calculates the maximum depth of the tree iteratively using a **queue** (level-order traversal).

#### Function: `maxDepth(node* node)`
- Calculates the maximum depth of the tree recursively using depth-first traversal.

---

### 3. **Node Search**

#### Function: `search(node* root, int value, int& level)`
- Searches for a node with a specific value.
- Returns a pointer to the node if found, along with the level of the node in the tree.
- Uses a depth-first traversal approach.

---

### 4. **Child Identification**

#### Function: `is_left(node* x)`
- Checks if the node is the **left child** of its parent.

#### Function: `is_right(node* x)`
- Checks if the node is the **right child** of its parent.

---

### 5. **Leaf Node Display**

#### Function: `printLeafNodes(node* root)`
- Prints all the **leaf nodes** (nodes with no children) in the binary tree.
- Uses a recursive traversal approach.

---

### 6. **Node Count**

#### Logic in `main()`
- The total number of nodes is calculated as:
  ```cpp
  total_nodes = count1 + count2 + 1;
