#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

#define max 100  // it will define the maximum size of an array  ;
struct queue
{
    int arr[max];
    int front;
    int rear;
};

void
initialize(queue &q)
{
    q.front = -1;
    q.rear = -1;
}

void push(queue &q, int value)
{
    if (q.rear < max - 1)
    {
        if(q.front==-1){
            q.front=0;
        }
        q.arr[++q.rear] = value;
    }
    else
        cout << "queue overflow:" << endl;
}

int pop(queue &q)
{
    if (q.front >= q.rear || q.front==-1)
    {
     cout << "stack underflow:" << endl;
        return -1;  
    }
    else
    {
       return q.arr[q.front++]; 
    }
}

int peek(queue &q){
   if(q.front==-1 || q.front>q.rear){
     cout<<"queue is empty :"<<endl;
     return -1;
  }
  else{
   return q.arr[q.front];
  }
}
int main()
{
    queue q;
    initialize(q);

    push(q,5);
    push(q,6);
    push(q,9);
       push(q,9);
          push(q,9);
             push(q,9);
                push(q,9);
                   push(q,9);
                      push(q,9);

     cout<<"the poppped element is :"<<pop(q);
     cout<<endl;
     cout<<"the poppped element is :"<<pop(q);
     cout<<endl;
     cout<<"peek element :"<<peek(q);
    return 0;
}