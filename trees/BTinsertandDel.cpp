#include <iostream>
#include <queue>
using namespace std;

struct node
{
    int val;
    node *parent;
    node *left;
    node *right;
};

// Creation of a binary tree
void create(node *&root)
{
    if (root == nullptr)
    {
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
    if (choice == 'y')
    {
        root->left = new node;
        root->left->parent = root;
        root->left->left = nullptr;
        root->left->right = nullptr;
        create(root->left);
    }
    else
    {
        root->left = nullptr;
    }

    cout << "Do you want to join the right child (y/n): ";
    cin >> choice;
    if (choice == 'y')
    {
        root->right = new node;
        root->right->parent = root;
        root->right->left = nullptr;
        root->right->right = nullptr;
        create(root->right);
    }
    else
    {
        root->right = nullptr;
    }
}


void dft(node *&root)
{
    if (root == nullptr)
    {

        return;
    }
    else
    {
        cout << root->val << endl;
        dft(root->left);
        dft(root->right);
    }
}

void insert(node *&root,int &value){   // this function will check the level wise and insert the value at the right place where
    node * newnode =new node;
    newnode->val=value;
if(root==nullptr){
    root=newnode;
    return;

}

queue<node *> q;
q.push(root);
while(!q.empty()){
    node *a =q.front();
    q.pop();
    if(a->left!=nullptr){
        q.push(a->left);
        
    }
    else{
        a->left=newnode;
        return ;
    }


     if(a->right!=nullptr){
        q.push(a->right);
    }
    else{
        a->right=newnode;
        return ;
    }
}
}

void deletDeepest(node* root, node* dNode) {
    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        if (temp == dNode) {
            temp = nullptr;
            delete dNode;
            return;
        }

        if (temp->right) {
            if (temp->right == dNode) {
                temp->right = nullptr;
                delete dNode;
                return;
            } else {
                q.push(temp->right);
            }
        }

        if (temp->left) {
            if (temp->left == dNode) {
                temp->left = nullptr;
                delete dNode;
                return;
            } else {
                q.push(temp->left);
            }
        }
    }
}


void deletion(node*& root, int target) {
    if (root == nullptr) {
        return;
    }

    // If tree has only one node
    if (root->left == nullptr && root->right == nullptr) {
        if (root->val == target) {
            delete root;
            root = nullptr;
        }
        return;
    }

    queue<node*> q;
    q.push(root);

    node* keyNode = nullptr;
    node* curr;

   
    while (!q.empty()) {
        curr = q.front();
        q.pop();

    
        if (curr->val == target) {
            keyNode = curr;
        }

      
        if (curr->left) {
            q.push(curr->left);
        }
        if (curr->right) {
            q.push(curr->right);
        }
    }

  
    if (keyNode != nullptr) {
     
        keyNode->val = curr->val;
       
      
        // deletDeepest(root, curr);
    }
}



int main()
{
    node *root = nullptr;
    create(root);
    dft(root);

    int value;
    cout<<"enter the value you want to insert in the binary tree "<<endl;
    cin>>value;
    insert(root,value);

    dft(root);
int target;
cout<<"give the value of the node you want to delete :"<<endl;
cin>>target ;
deletion(root,target);





    return 0;
}







// just for knowledge :     insertion  of a newnode after a node in the tree :


// #include <iostream>
// #include <queue>
// using namespace std;

// struct Node {
//     int val;
//     Node *left, *right;
//     Node(int value) : val(value), left(nullptr), right(nullptr) {}
// };

// // Function to search for a node with a given value
// Node* search(Node* root, int target) {
//     if (root == nullptr) return nullptr;
//     if (root->val == target) return root;

//     Node* leftSearch = search(root->left, target);
//     if (leftSearch) return leftSearch;

//     return search(root->right, target);
// }

// // Function to insert a new node as a child of the target node
// bool insertAfter(Node* root, int target, int newValue, char childPosition) {
//     Node* targetNode = search(root, target);
//     if (targetNode == nullptr) {
//         cout << "Target node not found." << endl;
//         return false;
//     }

//     Node* newNode = new Node(newValue);

//     if (childPosition == 'L') {
//         if (targetNode->left == nullptr) {
//             targetNode->left = newNode;
//             cout << "Inserted " << newValue << " as left child of " << target << "." << endl;
//         } else {
//             cout << "Left child already exists for node " << target << "." << endl;
//         }
//     } else if (childPosition == 'R') {
//         if (targetNode->right == nullptr) {
//             targetNode->right = newNode;
//             cout << "Inserted " << newValue << " as right child of " << target << "." << endl;
//         } else {
//             cout << "Right child already exists for node " << target << "." << endl;
//         }
//     } else {
//         cout << "Invalid child position specified. Use 'L' or 'R'." << endl;
//         delete newNode;
//         return false;
//     }

//     return true;
// }

// // Helper function to print the tree (in-order traversal)
// void inOrder(Node* root) {
//     if (root == nullptr) return;
//     inOrder(root->left);
//     cout << root->val << " ";
//     inOrder(root->right);
// }

// int main() {
//     // Creating a sample binary tree
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

//     // Insert a new node after a specific node
//     int targetValue = 2;
//     int newValue = 6;
//     char childPosition = 'L'; // Can be 'L' for left or 'R' for right
//     insertAfter(root, targetValue, newValue, childPosition);

//     // Print the tree after insertion
//     cout << "In-order traversal after insertion: ";
//     inOrder(root);
//     cout << endl;

//     return 0;
// }
