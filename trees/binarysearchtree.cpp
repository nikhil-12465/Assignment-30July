#include <iostream>
using namespace std;

struct node {
    int val;
    node *parent;
    node *left;
    node *right;
};

void create(node *&root, int value) {
    if (root == nullptr) {
        root = new node;
        root->val = value;
        root->left = nullptr;
        root->right = nullptr;
        root->parent = nullptr;
        return;
    }

    if (value < root->val) {
        create(root->left, value);
        root->left->parent = root;
    } else if (value > root->val) {
        create(root->right, value);
        root->right->parent = root;
    }
}




void inorderTraversal(node* root) {
    if (root == nullptr) {
        return;
    }

    inorderTraversal(root->left); 
    cout << root->val << " ";      
    inorderTraversal(root->right); 
}

int main() {
    node *root = nullptr;
    int choice;

    do {
        int value;
        cout << "Enter the value you want to insert: ";
        cin >> value;
        create(root, value);

        cout << "Do you want to insert another node: ";
        cin >> choice;
    } while (choice);


    inorderTraversal(root);

    return 0;
}
