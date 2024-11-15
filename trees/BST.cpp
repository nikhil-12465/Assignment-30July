#include <iostream>
using namespace std;

struct node
{
    int val;
    node *parent;
    node *left;
    node *right;
};

void create(node *&root, int value)
{
    if (root == nullptr)
    {
        root = new node;
        root->val = value;
        root->left = nullptr;
        root->right = nullptr;
        root->parent = nullptr;
        return;
    }

    if (value < root->val)
    {
        create(root->left, value);
        root->left->parent = root;
    }
    else if (value > root->val)
    {
        create(root->right, value);
        root->right->parent = root;
    }
}

void insertion(node *&root, int value)
{
    node *newnode = new node;
    newnode->val = value;

    if (root == nullptr)
    {
        root = newnode;
    }
    else
    {
        if (newnode->val > root->val)
        {
            if (root->right == nullptr)
            {
                root->right = newnode;
            }
            else
            {
                insertion(root->right, value);
            }
        }
        else
        {
            if (root->left == nullptr)
            {
                root->left = newnode;
            }
            else
            {
                insertion(root->left, value);
            }
        }
    }
}

void search(node *root, int key)
{
    if (root == nullptr)
    {

        cout << "Key is not found in the tree" << endl;
        return;
    }

    if (root->val == key)
    {

        cout << "Key is found in the tree" << endl;
        return;
    }

    if (key < root->val)
    {
        search(root->left, key);
    }
    else
    {
        search(root->right, key);
    }
}

void dftr(node *&root)
{   //   this is an example of preorder traversal
    // Root -> Left -> Right
    if (root == nullptr)
    {

        return;
    }
    else
    {
        cout << root->val << endl;
        dftr(root->left);
        dftr(root->right);
    }
}

node *getInorderSuccessor(node *curr)
{
    while (curr && curr->left != nullptr)
    {
        curr = curr->left;
    }
    return curr;
}

// Function to delete a node with the given value from the BST
node *deleteNode(node *root, int key)
{
    if (root == nullptr)
    {
        return root;
    }

    // Find the node to be deleted
    if (key < root->val)
    {
        root->left = deleteNode(root->left, key);
        if (root->left)
            root->left->parent = root;
    }
    else if (key > root->val)
    {
        root->right = deleteNode(root->right, key);
        if (root->right)
            root->right->parent = root;
    }
    else
    {
        // Node to be deleted is found

        // Case 1: No child (leaf node)
        if (root->left == nullptr && root->right == nullptr)
        {
            if (root->parent)
            {
                if (root->parent->left == root)
                    root->parent->left = nullptr;
                else
                    root->parent->right = nullptr;
            }
            delete root;
            return nullptr;
        }

        // Case 2: Only one child
        if (root->left == nullptr)
        {
            node *temp = root->right;
            temp->parent = root->parent;
            delete root;
            return temp;
        }

        if (root->right == nullptr)
        {
            node *temp = root->left;
            temp->parent = root->parent;
            delete root;
            return temp;
        }

        // Case 3: Two children
        node *succ = getInorderSuccessor(root->right);
        root->val = succ->val;                            //  here we Replace value with successor's value
        root->right = deleteNode(root->right, succ->val); //  here we Delete successor
        if (root->right)
            root->right->parent = root;
    }

    return root;
}

int main()
{
    node *root = nullptr;
    int choice;

    do
    {
        int value;
        cout << "Enter the value you want to insert: ";
        cin >> value;
        create(root, value);

        cout << "Do you want to insert another node: ";
        cin >> choice;
    } while (choice);

    dftr(root);

    int value;
    cout << "give the value which is going to insert :" << endl;
    cin >> value;

    insertion(root, value);

    dftr(root);

    int key;
    cout << "the node you want to search" << endl;
    cin >> key;

    search(root, key);

    int target;
    cout << "the value of the node you want to delete" << endl;
    cin >> target;

    return 0;
}
