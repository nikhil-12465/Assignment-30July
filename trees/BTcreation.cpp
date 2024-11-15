// #include<iostream>
// using namespace std;

// struct node{
//     int val;
//     node *parent;
//     node *left;
//     node *right;
// };

// void creation(node *&parent) {
//     if (parent == nullptr) {
//         parent = new node;
//         cout << "Enter the data of the node: ";
//         cin >> parent->val;
//         parent->left = nullptr;
//         parent->right = nullptr;
//     }

//     char choice;

//     // Creation of left child
//     cout << "Do you want to create a left node for ";
//     cin >> choice;
//     if (choice == 'y') {
//         creation(parent->left);
//     }

//     // Creation of right child
//     cout << "Do you want to create a right node for " ;
//     cin >> choice;
//     if (choice == 'y') {
//         creation(parent->right); 
//     }
// }

// int main() {
//     node *root = nullptr;
//     creation(root);

//     return 0;
// }


// second way to approach it :

#include<iostream>
using namespace std;
struct node{
    int val;
    node * parent ;
    node * left ;
    node * right ;
};

void create(node *&root){
    cout<<" the value of the node is:"<<endl;
    cin>>root ->val;

    char choice;
  
    cout<<"do you want to join the left child :"<<endl;
      cin>> choice ;
    if(choice == 'y'){
        node * newnode = new node;
        newnode->parent = root;
        root->left=newnode;
        newnode->left = nullptr;  
        newnode->right = nullptr;
        create(root->left);

    }
    else{
        root->left=nullptr;
    }

  
    

    cout<<"do you want to join the right child :"<<endl;
    cin>> choice ;
    if(choice == 'y'){
        node * newnode = new node;
        newnode->parent = root;
        root->right=newnode;
        newnode->left = nullptr;  
        newnode->right = nullptr;
        create(root->right);

    }
    else{
        root -> right =nullptr;
    }



}

int main(){
    node * root =new node ;
    root ->parent =nullptr;
  
    root->left = nullptr;
    root->right = nullptr;
    create(root);



    return 0;
}