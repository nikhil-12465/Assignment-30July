#include<iostream>
#include<stack>
#include<queue>
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

//recursive call of the depth first traveersal 

void dftr(node * &root){  //   this is an example of preorder traversal 
 // Root -> Left -> Right
    if(root== nullptr){

        return;
    }
    else{
        cout<<root->val<<endl;
        dftr(root->left);
        dftr(root->right);
    }

}

// iterative call of the depthfirst traversal 

 void dfti(node *& root){
    stack<node *> s;
s.push(root);
while(!s.empty()) {
    node* a = s.top();
    s.pop();
    cout << a << " " << endl;
}


if (root->right !=nullptr){
    s.push(root->right);
}
if(root->left!= nullptr){
    s.push(root->left);

}

}



void inordertraversal(node *&root){  // this is the code of the inorder traversal by which we can get these things in the non decresing order 


//Left -> Root -> Right
    if(root== nullptr ){
        return ;
    }

    else{
        inordertraversal(root->left);
        cout<<root->val<<" "<<endl;
      inordertraversal(root->right);   
    }
}


void postordertraversal(node * &root){  // Left -> Right -> Root
    if(root==nullptr){
        return ;
    }
    else{
        postordertraversal(root->left);
        postordertraversal(root->right);
        cout<<root->val<<" "<<endl;

    }
}


// breath first traversal 

// recursive call for the breath first traveersal ( we have not )

// from here i want bft with the iteraative call : 

void bft(node * & root){
    queue<node * > s;
    s.push(root);

    while(!s.empty()){
        node * a=s.front();
        s.pop();
        cout<<a->val<<" "<<endl;

        if(a->left!=nullptr){
            s.push(a->left);

        }
         if(a->right!=nullptr){
            s.push(a->right);
            
        }

    }

}



int main(){
    node * root =new node ;
    root ->parent =nullptr;
  
    root->left = nullptr;
    root->right = nullptr;
    create(root);
    cout<<"the traversaal in the tree :"<<endl;
// dftr(root);

//  inordertraversal(root);
//  postordertraversal(root);

bft(root);


    return 0;
}