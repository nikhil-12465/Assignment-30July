Aim
To implement a doubly linked list that supports creation, updating, and deletion of nodes, allowing for bidirectional traversal and manipulation of the list.


Working

Node Structure:

Each node contains three elements:
A value (data) that holds the information.
A pointer to the next node (next).
A pointer to the previous node (prev).

List Creation:

A new doubly linked list is created by initializing the head pointer to nullptr.
Nodes are dynamically allocated when added to the list.


Insertion:

At the Beginning: A new node is created, its next pointer points to the current head, and the current head's prev pointer is updated to the new node. The head pointer is then updated to the new node.
At the End: Traverse to the last node, link the new node's prev to the last node, and update the last node's next pointer to point to the new node.
At a Specific Position: Traverse to the desired position, adjust the next and prev pointers of the nodes around the insertion point to include the new node.


Updating:

To update a node, traverse the list to find the node with the desired value. Once found, modify the node's value.


Deletion:

To delete a node:
If it’s the head node, update the head pointer to the next node and set the new head's prev pointer to nullptr.
If it's a middle or end node, adjust the next and prev pointers of the adjacent nodes to bypass the node to be deleted, then deallocate the memory for the deleted node.


Traversal:

You can traverse the list in both forward and backward directions using the next and prev pointers, respectively.