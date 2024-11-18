#include <iostream>
using namespace std;

struct node {
    int val;
    node* parent;
    node* left;
    node* right;
    int height; // Height of the node

    node(int value) {
        val = value;
        parent = nullptr;
        left = nullptr;
        right = nullptr;
        height = 1; // Initialize height to 1 for a new node
    }
};


int getHeight(node* n) {
    if (n == nullptr)
        return 0; 
    return n->height;
}

void updateHeight(node* n) {
    if (n != nullptr)
        n->height = 1 + max(getHeight(n->left), getHeight(n->right));
}

int getBalance(node* n) {
    if (n == nullptr)
        return 0; 
    return getHeight(n->left) - getHeight(n->right);
}

                                    // Right rotation
node* rightRotate(node* y) {
    node* x = y->left;
    node* T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update parents
    if (T2 != nullptr)
        T2->parent = y;
    x->parent = y->parent;
    y->parent = x;

    updateHeight(y);
    updateHeight(x);

    return x;
}

                                            // Left rotation
node* leftRotate(node* x) {
    node* y = x->right;
    node* T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    // Update parents
    if (T2 != nullptr)
        T2->parent = x;
    y->parent = x->parent;
    x->parent = y;

    updateHeight(x);
    updateHeight(y);
    
    return y;
}

//  insert the value in the avl tree 
node* insert(node* root, node* parent, int val) {
    if (root == nullptr) {
        node* newNode = new node(val);
        newNode->parent = parent; 
        return newNode;
    }

    if (val > root->val) {
        root->right = insert(root->right, root, val);
    } else{
        root->left = insert(root->left, root, val);
    }

   
    updateHeight(root);

    int balance = getBalance(root);

    //    agar insertion ke baad if we got balance factor is not 0,1,-1 then perform rotations to balance the tree
    if (balance > 1 && val < root->left->val)
        return rightRotate(root);

    if (balance < -1 && val > root->right->val)
        return leftRotate(root);

    if (balance > 1 && val > root->left->val) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    if (balance < -1 && val < root->right->val) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

// Pre-order traversal to display the tree
void preOrder(node* root) {
    if (root != nullptr) {
        cout << root->val << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

// Main function
int main() {
    node* root = nullptr;
    int choice;

    do {
        int value;
        cout << "Enter the value you want to insert: ";
        cin >> value;
        root = insert(root, nullptr, value);

        cout << "Do you want to insert another node: ";
        cin >> choice;
    } while (choice);

    cout <<endl<<" the tree that you have been made till now here is its depth-first-preorder-traversal : "<< endl;
    preOrder(root);

    return 0;
}
