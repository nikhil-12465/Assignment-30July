#include <iostream>
#include<queue>
using namespace std;

struct node {
    int val;
    node *parent;
    node *left;
    node *right;
};

// Creation of a tree
void create(node *&root, int &count1, int &count2) {
    cout << "Enter the value of the node: " << endl;
    cin >> root->val;

    char choice;

    cout << "Do you want to join the left child: " << endl;
    cin >> choice;
    if (choice == 'y') {
        count1++;
        node *newnode = new node;
        newnode->parent = root;
        root->left = newnode;
        newnode->left = nullptr;
        newnode->right = nullptr;
        create(root->left, count1, count2);
    } else {
        root->left = nullptr;
    }

    cout << "Do you want to join the right child: " << endl;
    cin >> choice;
    if (choice == 'y') {
        count2++;
        node *newnode = new node;
        newnode->parent = root;
        root->right = newnode;
        newnode->left = nullptr;
        newnode->right = nullptr;
        create(root->right, count1, count2);
    } else {
        root->right = nullptr;
    }
}

// Function to calculate the depth of the tree

// in this function we use in genaral breadth-first search  rule for calculting the depth :: 
int getDepth(node *root) {
    if (root == nullptr) {
        return 0;
    }

    queue<node*> q;
    q.push(root);
    int depth = 0;

    while (!q.empty()) {
        int levelSize = q.size();  // Number of nodes at the current level
        depth++;

        for (int i = 0; i < levelSize; ++i) {
            node* current = q.front();
            q.pop();

            if (current->left) {
                q.push(current->left);
            }
            if (current->right) {
                q.push(current->right);
            }
        }
    }

    return depth;
}

// Searching a node with the given value in the tree
node *search(node *root, int value, int &level) {
    if (root == nullptr) {
        return nullptr;
    }
    if (root->val == value) {
        return root;
    }

    level++;
    node *foundNode = search(root->left, value, level);
    if (foundNode != nullptr) {
        return foundNode;
    }

    return search(root->right, value, level);
}

// Checking if the given node is a left child or right child
void is_left(node *x) {
    if (x->parent != nullptr && x->parent->left == x) {
        cout << "Yes, this node is the left child of its parent." << endl;
    } else {
        cout << "No, this node is not the left child." << endl;
    }
}

void is_right(node *x) {
    if (x->parent != nullptr && x->parent->right == x) {
        cout << "Yes, this node is the right child of its parent." << endl;
    } else {
        cout << "No, this node is not the right child." << endl;
    }
}

int main() {
    node *root = new node;
    root->parent = nullptr;
    root->left = nullptr;
    root->right = nullptr;
    int count1 = 0;
    int count2 = 0;
    create(root, count1, count2); // Creation of a binary tree

    cout << "The number of nodes in the binary tree is: " << count1 + count2 + 1 << endl; // Total number of nodes

    int depth = getDepth(root); // Calculating the depth of the tree
    cout << "The depth of the binary tree is: " << depth - 1 << endl; // Depth of the binary tree
    cout << "The number of levels in the tree is: " << depth << endl; // Total number of levels

    // Checking if a given value is a left or right child  and tells about the level of that node also:
    int value;
    cout << "Enter the value of the node to find its level: ";
    cin >> value;

    int level = 0;
    node *x = search(root, value, level);

    if (x != nullptr) {
        cout << "The node with value " << value << " is at level: " << level << endl;
        is_left(x);
        is_right(x);
    } else {
        cout << "Node with value " << value << " not found in the tree." << endl;
    }

    return 0;
}


