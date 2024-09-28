#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct node {
    int data;
    struct node* next;
};


void creation(node*& start) {
    node* newnode, * temp;
    char choice;
    do {
        newnode = new node;  
        if (newnode == nullptr) {
            cout << "Memory allocation failed" << endl;
            return;
        }
        cout << "Enter the data: " << endl;
        cin >> newnode->data;
        newnode->next = nullptr;
        if (start == nullptr) {
            start = temp = newnode;
        }
        else {
            temp->next = newnode;
            temp = newnode;
        }

        cout << "Do you want to add another node? (y/n)" << endl;
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');
}


void sortList(node* start) {
    
    vector<int> arr;
    node* temp = start;
    while (temp != nullptr) {
        arr.push_back(temp->data);  
        temp = temp->next;
    }


    sort(arr.begin(), arr.end());

    
    temp = start;
    int i = 0;
    while (temp != nullptr) {
        temp->data = arr[i++];  
        temp = temp->next;
    }
}

int main() {
    node* start = nullptr;
    
    creation(start);

    cout << "The linked list is: ";
    node* temp = start;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    sortList(start);

    cout << "The sorted linked list is: ";
    temp = start;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}