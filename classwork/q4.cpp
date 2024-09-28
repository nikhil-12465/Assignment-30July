
// column major :
#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"no of rows in 2d array";
    cin>>m;
    int n;
    cout<<"the no of column in 2D array";
    cin>>n;

int a[m][n];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
}
int base_value=100;
int i;
int j;


cout<<"row_no of the value which address we want to find:";
cin>>i;
cout<<"column_no of the value which address we want to find:";
cin>>j;


int c=sizeof(a[0][0]);




int address=((j*m)+i)*c+base_value;
cout<<"the address of the element at the given position"<<address<<endl;

return 0;
}





// row major:

#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"no of rows in 2d array";
    cin>>m;
    int n;
    cout<<"the no of column in 2D array";
    cin>>n;

int a[m][n];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
}
int base_value=100;
int i;
int j;


cout<<"row_no of the value which address we want to find:";
cin>>i;
cout<<"column_no of the value which address we want to find:";
cin>>j;


int c=sizeof(a[0][0]);




int address=((i*n)+j)*c+base_value;
cout<<"the address of the element at the given position"<<address<<endl;

return 0;
}