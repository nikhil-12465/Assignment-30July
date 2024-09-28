#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;
int main(){
queue<int> q;
q.push(5);
q.push(6);
q.push(6);

cout<<"the number which is on the top :"<<q.front()<<endl;
q.pop();
cout<<"the number which is on the top :"<<q.front()<<endl;
return 0;
}