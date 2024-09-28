#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
};


void display(node* start) {
    if (start == nullptr) {  
        cout << "List is empty" << endl;
    } else {
        node* temp = start; 
        while (temp->next != start) {
            cout << temp->data << " ";  
            temp = temp->next;
        }
        cout << temp->data << endl; 
    }
}



int main() {
    node* start = nullptr;  
    node* temp = nullptr;   

    int choice;
    do {
        node* newnode = new node;  
        cout << "Enter new node data:" << endl;
        cin >> newnode->data;
        newnode->next = nullptr;  

        if (start == nullptr) {
            start = newnode;  
            temp = start;
        } else {
            temp->next = newnode; 
            temp = newnode;
        }

        cout << "Do you want to enter another data: " << endl;
        cin >> choice;
    } while (choice == 1);

    temp->next = start;  

    display(start);  

    return 0;
}
