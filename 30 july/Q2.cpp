
//first approch using xor :

// #include<iostream>
// #include<vector>
// #include<math.h>
// #include<algorithm>

// using namespace std;
// int missingelement(vector<int> &a,int n){
//     int ans=0;
    
//     for(int i=0;i<n-1;i++){
//         ans=ans^a[i];
//     }
// int firstele= *min_element(a.begin(),a.end());
// int lastele = firstele + n-1;

//     for(int i=firstele;i<=lastele;i++){
//         ans=ans^i;
//     }
//     return ans;

// }

// int main(){

//     int n;
//     cout<<"number of elements in your array with missing element "<<endl;
//     cin>>n;
//     vector<int> a(n-1);
//     for(int i=0;i<n-1;i++){
//         cin>>a[i];    } 
//         cout<<endl;

//         int p=missingelement(a,n);
//         cout<<"missing element:"<<p<<endl;
//     return 0;
// }



// second approach using bitwise & operator:

#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
  int missing_num=-1;
for(int i=0;i<n-1;i++){
   
int x=a[i]&1;
int y=a[i+1]&1;

if(x==y){
    missing_num=a[i]+1;
    
}

}
if(missing_num!=-1){
    cout<<"the missing_num is:"<<missing_num<<endl;
}


return 0;
}

