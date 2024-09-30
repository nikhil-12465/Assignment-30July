//when there is only a single element is needed in the linked list :

// #include<iostream>
// #include<cmath>
// #include<algorithm>
// #include<vector>
// using namespace std;
// struct node{
//     int data;
//     node* next ;
// };
// int main(){
//  node * start,* newnode,*temp ;
// start = nullptr;
// newnode= (struct node *)malloc(sizeof(struct node));
// cout<<"enter the data :"<<endl;
// cin>> newnode-> data;
// newnode -> next = 0;
// if(start==nullptr){
// start= newnode ;
// }
// cin>> newnode -> data;
// newnode -> next = nullptr;


  


// return 0;
// }

 // creating a link list :::-------------------

#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<cstdlib>
using namespace std;
struct node{
    int data;
    node* next ;
};

 
int main(){
 node * start,* newnode,*temp ;
start = nullptr;
char choice;
int count =0;
do{
newnode= (struct node *)malloc(sizeof(struct node));

if(newnode==nullptr){
    cout<<"memory allocation failed"<<endl;
    return 1;
}
cout<<"enter the data :"<<endl;
cin>> newnode-> data;
newnode -> next = 0;
if(start==nullptr){
start=temp= newnode ;
}
else{
temp->next=newnode;
temp=newnode;


}

cout<<"do you want to add another node?"<<endl;
cin>>choice;

}while(choice=='y'||choice=='Y');



cout<<"the linked list is : ";
temp=start;
while(temp!=nullptr){
    cout<<temp->data<<" ";
    temp=temp->next;
    count++;
}

cout<<"the total number of element is: "<<count<<endl;

return 0;
}