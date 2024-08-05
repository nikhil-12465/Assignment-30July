#include<iostream>
using namespace std;
int main(){
int v;
cout<<"enter the value of velocity:"<<endl;
cin>>v;
int count =0;
while(v!=0){
count++;

v=v/2;
}
cout<<count;

    return 0;
    
}