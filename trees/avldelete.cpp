#include <iostream>
using namespace std;

struct node {
    int val;
    node* parent;
    node* left;
    node* right;
    int height;

    node(int value) {
        val = value;
        parent = nullptr;
        left = nullptr;
        right = nullptr;
        height = 1;
    }
};

int getHeight(node* n) {
    return (n == nullptr) ? 0 : n->height;
}

void updateHeight(node* n) {
    if (n != nullptr) {
        n->height = 1 + max(getHeight(n->left), getHeight(n->right));
    }
}

int getBalance(node* n) {
    return (n == nullptr) ? 0 : getHeight(n->left) - getHeight(n->right);
}

// Right rotation
node* rightRotate(node* y) {
    node* x = y->left;
    node* T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update parents
    if (T2 != nullptr) T2->parent = y;
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
    if (T2 != nullptr) T2->parent = x;
    y->parent = x->parent;
    x->parent = y;

    updateHeight(x);
    updateHeight(y);

    return y;
}

 // findmin value for replacing during deletion 

node* findMin(node* root) {
    while (root->left != nullptr)
        root = root->left;
    return root;
}

// deletion of a node in avl tree 
node* deleteNode(node* root, int val) {

    if (root == nullptr) return root;

    if (val < root->val) {
        root->left = deleteNode(root->left, val);
    } else if (val > root->val) {
        root->right = deleteNode(root->right, val);
    } else {
        // Node to be deleted found
        if (root->left == nullptr || root->right == nullptr) {
            node* temp = root->left ? root->left : root->right;

            if (temp == nullptr) {
                temp = root;
                root = nullptr;
            } else {
                *root = *temp; 
            }

            delete temp;
        } else {
            
            node* temp = findMin(root->right);

            root->val = temp->val; 
            root->right = deleteNode(root->right, temp->val); 
        }
    }

    if (root == nullptr) return root;

    updateHeight(root);

    int balance = getBalance(root);

    // Balance the tree

    // Left Left Case
    if (balance > 1 && getBalance(root->left) >= 0)
        return rightRotate(root);

    // Left Right Case
    if (balance > 1 && getBalance(root->left) < 0) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    // Right Right Case
    if (balance < -1 && getBalance(root->right) <= 0)
        return leftRotate(root);

    // Right Left Case
    if (balance < -1 && getBalance(root->right) > 0) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

// Pre-order traversal
void preOrder(node* root) {
    if (root != nullptr) {
        cout << root->val << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main() {
    node* root = nullptr;

 
    root = new node(10);
    root = deleteNode(root, 10); 

    // Construct AVL tree
    root = new node(20);
    root = deleteNode(root, 20);

    cout << "Pre-order traversal after deletions:" << endl;
    preOrder(root);

    return 0;
}
