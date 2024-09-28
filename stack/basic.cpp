// #include<iostream>
// #include<cmath>
// #include<algorithm>
// #include<vector>
// #include<stack>
// using namespace std;
// int main(){
// stack<int> s;
// s.push(5);
// s.push(4);
// s.push(3);
// cout<<s.top;
// cout<<"top element :"<<s.top();cout<<endl;
// s.pop();

// cout<<"top element :"<<s.top();cout<<endl;
// cout<<"is stack is empty:"<<(s.empty()?"yes":"no")<<endl;
// return 0;
// }

// // // stack by the use of array :-

// #include <iostream>
// using namespace std;

// #define MAX 100

// struct Stack {
//     int arr[MAX];
//     int top;
// };

// void initialize(Stack& s) {
//     s.top = -1;
// }

// void push(Stack& s, int value) {
//     if (s.top < MAX - 1) {
//         s.arr[++s.top] = value;
//     } else {
//         cout << "Stack overflow" << endl;
//     }
// }

// int pop(Stack& s) {
//     if (s.top >= 0) {
//         return s.arr[s.top--];
//     } else {
//         cout << "Stack underflow" << endl;
//         return -1;
//     }
// }

// int peek(Stack& s) {
//     if (s.top >= 0) {
//         return s.arr[s.top];
//     } else {
//         cout << "Stack is empty" << endl;
//         return -1;
//     }
// }

// bool isEmpty(Stack& s) {
//     return s.top == -1;
// }

// int main() {
//     Stack s;
//     initialize(s);

//     push(s, 10);
//     push(s, 20);
//     push(s, 30);

//     cout << "Top element: " << peek(s) << endl;
//     cout << "Popped element: " << pop(s) << endl;
//     cout << "Top element after pop: " << peek(s) << endl;

//     return 0;
// }

// implementation of stack using linked list :
// #include <iostream>
// using namespace std;
// struct node
// {
//     int data;
//     node *next;
// };

// void push(node *&top, int value)
// {
//     node *newnode = new node{value, top};
//     top = newnode;
// }


// int peek(node *top)
// {
//     if (top)
//     {
//         return top->data;
//     }
//     else
//     {
//         cout << "stack is empty" << endl;
//         return -1;
//     }
// }



//     int pop(node * &top)
//     {
//         if (top)
//         {
//             node *temp = top;
//             top = top->next;
//             delete temp;
//         }
//         else
//         {
//             cout << "stack underflow" << endl;
//         }
//     }

// void printstack(node * top){
//     node *temp=top;
//     while(temp){
//         cout<<temp->data;
//         temp=temp->next;
//         cout<<" ";
//     }
//     cout<<endl;
// }
    
//     int main()
//     {

//         node *top = nullptr;
//         push(top, 10);
//         push(top, 20);
//         push(top, 30);

//         cout << "top element:" << peek(top) << endl;
//         pop(top);
//         printstack(top);
      
//         cout << "the  top element after pop operation :" << peek(top) << endl;

//         return 0;
//     }



// input of the two stack and compare them :--->

#include<iostream>
using namespace std;
 
struct node{
    int data;
    node * next;

};

void push(node * &stack,int value){
   node * newnode = new node{value,stack};
    stack=newnode;
}
void print(node * stack){
    node *temp=stack;
    while(temp){
        cout<<temp->data;
        temp=temp->next;
        cout<<" ";
    }
 
}

int peek(node * &stack){
    if(stack){
        cout<<stack->data;
    }
    
}

void pop(node *&stack){
if(stack){
    node * newnode=stack;
    stack=stack->next;
    delete newnode;
}

}

bool compare(node *stack1,node *stack2){
while((stack1=nullptr) && (stack2=nullptr)){
if(peek(stack1)!=peek(stack2)){
    return false;

}
pop(stack1);
pop(stack2);
}
return (stack1=nullptr) && (stack2=nullptr);

}


int main(){
    node * stack1=nullptr;
    node * stack2=nullptr;

push(stack1,1);
push(stack1,2);
push(stack1,3);
push(stack2,1);
push(stack2,2);
push(stack2,3);

cout<<endl;

if(compare(stack1,stack2)){
    cout<<"stack are equal"<<endl;
}
else{
    cout<<"stack are not equal"<<endl;
}

// peek(stack1);
// cout<<" ";
// peek(stack2);
// cout<<endl;

// pop(stack1);
// pop(stack2);

// print(stack1);
// cout<<endl;
// print(stack2);


return 0;

}



