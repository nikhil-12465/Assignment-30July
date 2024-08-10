#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>

using namespace std;
int missingelement(vector<int> &a,int n){
    int ans=0;
    
    for(int i=0;i<n-1;i++){
        ans=ans^a[i];
    }
int firstele= *min_element(a.begin(),a.end());
int lastele = firstele + n-1;

    for(int i=firstele;i<=lastele;i++){
        ans=ans^i;
    }
    return ans;

}

int main(){

    int n;
    cout<<"number of elements in your array"<<endl;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n-1;i++){
        cin>>a[i];    } 
        cout<<endl;

        int p=missingelement(a,n);
        cout<<"missing element:"<<p<<endl;
    return 0;
}