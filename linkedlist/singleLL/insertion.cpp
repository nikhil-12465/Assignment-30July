#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void insertbegining(node *&start)
{
    node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    cout << "enter the data you want to insert " << endl;
    cin >> newnode->data;
    newnode->next = start;
    start = newnode;
}

void insertend(node *&start)
{
    node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    cout << "enter the data you want to insert " << endl;
    cin >> newnode->data;
    newnode->next = nullptr;
    if (start == nullptr)
    {
        start = newnode;
    }
    else
    {
        node *temp = start;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
void randominsert(node *&start)
{
    node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    cout << "enter the data you want to insert : " << endl;
    cin >> newnode->data;
    
    if (start == nullptr) {
        newnode->next = nullptr;
        start = newnode;
        return;
    }

    int value;
    cout << "Enter the value after which you want to insert the new node: " << endl;
    cin >> value;
     node *temp = start;
    while (temp != nullptr && temp->data != value) {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}



int main()
{
    node *start, *newnode, *temp;
    start = nullptr;
    char choice;
    int count = 0;
    do
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        if (newnode == nullptr)
        {
            cout << "memory allocation failed" << endl;
            return 1;
        }
        cout << "enter the data :" << endl;
        cin >> newnode->data;
        newnode->next = 0;
        if (start == nullptr)
        {
            start = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        cout << "do you want to add another node?" << endl;
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');
    insertbegining(start);
    insertend(start);

    randominsert(start);

    cout << "the linked list is : ";
    temp = start;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
        count++;
    }

    cout << "the total number of element is: " << count << endl;

    return 0;
}