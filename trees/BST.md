README: Binary Search Tree (BST) with Create, Insert, Search, Delete, and Preorder Traversal


Overview :

This program is a C++ implementation of a Binary Search Tree (BST) with the following functionalities:

Node Insertion:

Inserts a value into the BST while maintaining its properties.
Includes two methods:
create: Inserts nodes with parent pointers.
insertion: Alternative method to insert nodes.

Node Search:

Searches for a given key in the BST and informs whether the key exists.

Preorder Traversal:

Traverses the tree in the order Root -> Left -> Right and prints the node values.

Node Deletion:

Deletes a node with a specific value, handling all three cases of deletion:
No child (leaf node).
One child.
Two children (replaces with the in-order successor).
How It Works

Node Structure:

Each node has:
val: Value of the node.
left: Pointer to the left child.
right: Pointer to the right child.
parent: Pointer to the parent node.

Key Functions:

create: Recursively inserts values into the BST and sets parent pointers.

insertion: Iteratively inserts values into the BST.

search: Recursively searches for a key in the tree.

dftr: Implements Preorder Traversal (Root -> Left -> Right).

deleteNode: Handles node deletion based on the number of children.

getInorderSuccessor: Finds the in-order successor for nodes with two children during deletion.

Main Function:

Provides a menu-driven interface to insert nodes, display the tree, search for keys, and delete nodes.

Input Format

Node Insertion:

Insert values one by one through create until the user chooses to stop.
Optionally, add a new node using the insertion function.

Key to Search:

Input the value of the node to search for in the BST.

Key to Delete:

Input the value of the node to delete from the BST.


Output Format   


Displays the Preorder Traversal of the tree after node insertion.
Notifies whether a key is found in the BST during the search.
Shows the updated Preorder Traversal of the tree after node deletion.