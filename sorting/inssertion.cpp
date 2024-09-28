#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
void insertion_sort(int *a,int n){
    for(int i=0;i<n;i++){
        int temp=a[i];
        int j=i-1;
        for(;j>=0;j--){
            if(a[j]>temp){
                a[j+1]=a[j];
            }
            else{
                break;
            }
          
        }
        a[j+1]=temp;
        
    }
}
int main(){
int a[6] = {5,8,7,4,3,1}; 
    int n = sizeof(a) / sizeof(a[0]); 

insertion_sort(a, n); 

    cout << "The sorted array is:" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " "; 
    }
    cout << endl; 
return 0;
}