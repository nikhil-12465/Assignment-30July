#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

struct node
{
    int data;
    node *prev;
    node *next;
};

void creation(node *&start)
{
    int choice;
    node *prev = nullptr;

    do
    {
        node *newnode = new node;
        cout << "the data of the new node :" << endl;
        cin >> newnode->data;
       
        newnode->next = nullptr;
        newnode->prev = prev;
        if (start == nullptr)
        {
            start = newnode;
        }
        else
        {
            prev->next = newnode;
        }

        prev = newnode;
        cout << "you want to add node :" << endl;
        cin >> choice;
    } while (choice);


}

void creationdoubly(node *&start)
{
    int choice;
    node *prev = nullptr;
    node *last=nullptr;

    do
    {
        node *newnode = new node;
        cout << "the data of the new node :" << endl;
        cin >> newnode->data;
       
        newnode->next = nullptr;
        newnode->prev = prev;
        if (start == nullptr)
        {
            start = newnode;
        }
        else
        {
            prev->next = newnode;
        }

        prev = newnode;
        last=newnode ;

        cout << "you want to add node :" << endl;
        cin >> choice;
    } while (choice);
if(start!=nullptr && last!=nullptr){
    last->next=start;
    start->prev=last;
}

}

void deletebegin(node *&start)
{
    node * temp=start;

    if (start == nullptr)
    {
        return;
    }
    else
    {
        start=start->next;
        if (start != nullptr)
        {
            start->prev = nullptr;
        }
    }

    delete (temp); // yhan agar to start ko delete krta to result mein first value garbage aati ;
}

void deleteend(node *&start)
{
    node * temp=start;
    node * prev=nullptr;

    if (start == nullptr)
    {
        return;
    }
    else
    {
        while(temp ->next->next!=nullptr){
            temp=temp->next;
        }
        temp->next=nullptr;

    }

    delete (temp->next); 
}

void deleterandom(node * start){
    node * temp=start;
    node * prev=nullptr;
    int value;
    cout<<"enter value you want to delete"<<endl;
    cin>>value;
    while(temp!=nullptr && temp->data!=value){
        prev=temp;
        temp=temp->next;

    }
    prev->next=temp->next ;
    temp->next->prev=prev;

}

void display(node *&start)
{


    if (start == nullptr)
    {
        cout << "List is empty" << endl;
        return;
    }

    node *temp = start;
    do
    {
        cout << temp->data << " "; 
        temp = temp->next;         
    } while (temp != start);       

    cout << endl;
}



int main()
{
    node *start = nullptr;
    creationdoubly(start);
    cout << "the linked list is:" << endl;
    display(start);

//     deletebegin(start);
//     cout << "the linked list after deletion is :" << endl;
//     display(start);

// deleteend(start);
//     cout << "the linked list after deletion is :" << endl;
//     display(start);

// deleterandom(start);
//     cout << "the linked list after deletion is :" << endl;
//     display(start);

    return 0;
}