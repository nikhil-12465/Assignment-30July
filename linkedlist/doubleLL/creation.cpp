#include <iostream>
using namespace std;

struct node {
    int data;
    struct node* next;
    struct node* prev;
};

void creation(node*& start) {
    node* newnode, * temp;
    char choice;

    node* prev = nullptr;
    
    do {
        newnode = new node;  
        if (newnode == nullptr) {
            cout << "Memory allocation failed" << endl;
            return;
        }
        cout << "Enter the data: " << endl;
        cin >> newnode->data;
        newnode->next = nullptr;
        newnode->prev = prev;  

        if (start == nullptr) {
            start = newnode;  
        } else {
            prev->next = newnode;  
        }
        
        prev = newnode;  

        cout << "Do you want to add another node? (y/n)" << endl;
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');
}

void  insertbegin(node *&start){
node * prev=nullptr;
node * newnode= new node ;
cout<<"the data yoou want to insert in the begining :"<<endl;
cin>>newnode ->data;
newnode ->next =start;
newnode ->prev=nullptr;

if(start!=nullptr){
    start->prev=newnode;
}
start=newnode ;

}

void insertend(node *&start){
 
    node* newnode = new node;
    cout << "The data you want to insert in the end: " << endl;
    cin >> newnode->data;
    newnode->next = nullptr;

  
    if (start == nullptr) {
        newnode->prev = nullptr;
        start = newnode;
        return;
    }

    
    node* temp = start;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

   
    temp->next = newnode;
    newnode->prev = temp;
}

void insertrandom(node *&start){
 node* newnode = new node;
    cout << "The data you want to insert in the end: " << endl;
    cin >> newnode->data;
    int value;
   
cout<<"the number after which you want to insert :"<<endl;
  cin>>value;
   

    
    node* temp = start;
    while (temp != nullptr && temp->data!=value) {

    
        temp = temp->next;
    }


    newnode->next=temp->next;
    newnode->prev = temp;
   if (temp->next != nullptr) {
        temp->next->prev = newnode;
    }
   
     temp->next = newnode;

}

 void display(node * &start){
    node* temp=start;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

 }


int main() {
    node* start = nullptr;
    
    creation(start);

    cout << "The linked list is: ";
    display(start);

    // insertbegin(start);
   
    // cout<<"the linkedlist after insertion in the begining  :"<<endl;
 

//      insertend(start);
//     cout<<"linked list after insertion in the end :";
// display(start);

insertrandom(start);
cout<<"the linked list after inserted randomly is :"<<endl;
display(start);

    return 0;
}
