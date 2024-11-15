
                                      //  operations on binary tree 
#include <iostream>
#include <queue>
using namespace std;

struct node {
    int val;
    node *parent;
    node *left;
    node *right;
};

// Creation of a binary tree
void create(node *&root, int &count1, int &count2) {
    if (root == nullptr) {
        root = new node;
        root->left = nullptr;
        root->right = nullptr;
        root->parent = nullptr;
    }

    cout << "Enter the value of the node: ";
    cin >> root->val;

    char choice;

    cout << "Do you want to join the left child (y/n): ";
    cin >> choice;
    if (choice == 'y') {
        count1++;
        root->left = new node;
        root->left->parent = root;
        root->left->left = nullptr;
        root->left->right = nullptr;
        create(root->left, count1, count2);
    } else {
        root->left = nullptr;
    }

    cout << "Do you want to join the right child (y/n): ";
    cin >> choice;
    if (choice == 'y') {
        count2++;
        root->right = new node;
        root->right->parent = root;
        root->right->left = nullptr;
        root->right->right = nullptr;
        create(root->right, count1, count2);
    } else {
        root->right = nullptr;
    }
}

// Function to calculate the  max depth of the tree ( height )  recursively 
int getDepth(node *root) {
    if (root == nullptr) {
        return 0;
    }

    queue<node*> q;
    q.push(root);
    int depth = 0;

    while (!q.empty()) {
        int levelSize = q.size();
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

// function for finding the heigth iteraative :
int maxDepth(node  *node) {
    if (node == nullptr)
        return 0;

    int lDepth = maxDepth(node->left);
    int rDepth = maxDepth(node->right);

    return max(lDepth, rDepth) + 1;
}


// Searching a node with the given value in the tree
node* search(node* root, int value, int &level) {
    if (root == nullptr) {
        return nullptr;
    }
    if (root->val == value) {
        return root;
    }

    level++;
    node* foundNode = search(root->left, value, level);
    if (foundNode) return foundNode;

    foundNode = search(root->right, value, level);
    if (foundNode) return foundNode;

    level--;  // Decrement level if the node is not found in either subtree
    return nullptr;
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

// Function to print all the leaf nodes
void printLeafNodes(node *root) {
    if (!root) return;

    if (!root->left && !root->right) {
        cout << root->val << " ";
        return;
    }

    if (root->left) printLeafNodes(root->left);
    if (root->right) printLeafNodes(root->right);
}

int main() {
    node *root = nullptr;
    int count1 = 0;
    int count2 = 0;
    create(root, count1, count2);

    cout << "The number of nodes in the binary tree is: " << count1 + count2 + 1 << endl;

    int depth = getDepth(root);
    cout << "The depth of the binary tree is: " << depth << endl;

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

    cout << "The leaf nodes in the tree are: ";
    printLeafNodes(root);
    cout << endl;

    return 0;
}
