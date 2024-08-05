#include<iostream>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<=n;i++){
        for(int j=i+1;j<=n;j++) {
            for(int k=0;k<=n;k++){
                if(k!=i&&k!=j){
                if(a[i]+a[j]==a[k]){
                    cout<<a[i]<<a[j]<<a[k]<<endl;
                }
                }
            }
        }

    }

}