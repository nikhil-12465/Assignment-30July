#include<iostream>
using namespace std;
struct node{
    int data;
    node * next ;
};
//  void enqueue1(node * &front,node * &Rear,int data){
//     node * newnode =new node{data,Rear} ;
// Rear=newnode ;
// front=newnode ;                                              // these two function what i made and make aa mistake 
// }

//  void enqueue(node * &Rear,int data){
//     node * newnode =new node{data,Rear} ;
// Rear=newnode ;
// }


void enqueue(node*& front, node*& rear, int data) {
    node* newnode = new node{data, nullptr}; 
    if (rear) {
        rear->next = newnode; 
    } else {
        front = newnode; 
    }
    rear = newnode; 
}
void dequeue(node * &front){
 
    if (front)
        {
            node *temp = front;
            front = front->next;
            delete temp;
        }
        else
        {
            cout << "queue underflow" << endl;
        }
}

int  peek(node * &front){
    if(front){
        cout<<"peek value is :"<<front->data<<endl;
        return front->data;
    }
    else{
        cout<<"queue is empty :"<<endl;
        return -1;
    }
}
int main(){
    node *Rear=nullptr;
    node * front =nullptr;
   enqueue(front,Rear,5);
   enqueue(front,Rear,6);
   enqueue(front,Rear,7);
   enqueue(front,Rear,8);
   enqueue(front,Rear,9);

peek(front);
dequeue(front);
peek(front);
}