#include<iostream>
using namespace std;
#define max 100
struct queue
{
    int arr[max];
    int front=-1;
    int rear=-1;
};


void enqueue(queue &q,int a){
if(q.front ==-1 && q.rear == -1){
    q.front = q.rear = 0;
q.arr[q.rear]=a;
}
else if (((q.rear+1)%max)==q.front){
    cout<<" queue is full : "<<endl;

}
else{
    q.rear=(q.rear+1)%max;
    q.arr[q.rear]=a;
}
}

void display( queue &q){
    if(q.front==-1 && q.rear==-1){
        cout<<" the queue is empty :"<<endl;
    }
    else {
cout<<"the queue is :"<<endl;
int i=q.front;
while(i!=q.rear){
    cout<<q.arr[i]<<" ";
    i=(i+1)%max;

}
       cout << q.arr[q.rear] << endl;

    }

}

 void dequeue(queue &q){
    if(q.front==-1 && q.rear ==-1){
        cout<<"queue is empty:"<<endl;
    }
    else{
       q.front = (q.front + 1) % max;
    }
 }

int main(){
    queue q;
enqueue(q,1);
display(q);




    return 0;
}