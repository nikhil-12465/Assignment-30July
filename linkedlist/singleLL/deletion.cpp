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

void deleterandom(node *&start)
{
    node *temp = start;
    node *p = nullptr;  
  

    cout << "Enter the data of the node which you want to delete ): ";
    int pdata;
    cin >> pdata;  

   
    while (temp != nullptr && temp->data != pdata) {
        p = temp;  
        temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr) {
        cout << "Node p not found or no node exists after p to delete." << endl;
        return;
    }

    
    node *nodeToDelete = temp;
    p->next = nodeToDelete->next;  

    cout << "Deleted node with data: " << nodeToDelete->data << endl;

    free(nodeToDelete);  
}


void deletebegining(node *&start)
{
  node *nodetodelete=start;
  start=start->next; 
  free(nodetodelete);
 
}

void deleteend(node *&start)
{
    node *temp=start;
    node* p=nullptr;

    while(temp->next!=nullptr){
        p=temp;
        temp=temp->next;
        
    }
  node *nodetodelete=temp;
  p->next=nullptr; 
  free(nodetodelete);
 
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
    deleterandom(start);
    //  deletebegining(start);

    // deleteend(start);

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