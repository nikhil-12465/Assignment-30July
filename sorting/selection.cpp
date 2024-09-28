#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

void selection_sort(int *a,int n){
  

for(int i=0;i<n-1;i++){
    int min_index=i;
    for(int j=i+1;j<n;j++){
        if(a[j]<a[min_index]){
            min_index=j;
        }
       }
      swap(a[min_index],a[i]);
}
}
int main(){
    
int a[5]={4,5,3,7,8};
int n=sizeof(a)/sizeof(a[0]);
selection_sort(a,n);
cout<<"the sorted array is:"<<endl;
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
return 0;
}


