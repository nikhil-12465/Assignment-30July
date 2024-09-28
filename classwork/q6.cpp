// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int x;
//     int count=0;
//     cout << "the number you have to search" << endl;
//     cin >> x;
//     for (int i = 0; i < n; i++)
//     {
//         if (x == a[i])
//         {
//             cout << "the number is in the array";
//             break;

//         }
//         else{
//         count++;
//         }
//     }
//     if(count==n){
//         cout<<"the number is not in the array";
//     }

//     return 0;
// }


// linear  search in function:

// #include<iostream>
// using namespace std;
// char linearsearch(int a[],int n,int x){
    
//     for(int i=0;i<n;i++){
//         if(a[i]==x){
//             return i ;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cout<<"the number of element in array"<<endl;
//     cin>>n;
//     int a[100];
//     int N=5;
//     for(int i=0;i<n;i++){
//        a[i]=rand()%N;
//     }
//     int x;
//     cout<<"number you want to search"<<endl;
//     cin>>x;
//     int p=linearsearch(a,n,x);
//     if (p != -1) {
//         cout << "Element found at index: " << p << endl;
//     } else {
//         cout << "Element not found." << endl;
//     }

//     return 0;
// }

// linear search recursive way:--
#include<iostream>
using namespace std;
char linearsearch(int a[],int n,int x,int i=0){
  if(i>=n){
    return -1;
  }
  if(a[i]==x){
    return i;
  }
   return linearsearch(a,n,x,i+1);
}
int main(){
    int n;
    cout<<"the number of element in array"<<endl;
    cin>>n;
    int a[100];
    int N=20;
    for(int i=0;i<n;i++){
       a[i]=rand()%N;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int x;
    cout<<"number you want to search"<<endl;
    cin>>x;
    int p=linearsearch(a,n,x);
    if (p != -1) {
        cout << "Element found at index: " << p << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}