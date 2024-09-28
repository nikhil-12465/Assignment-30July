#include <iostream>
#include <algorithm>
using namespace std;

void bubble_sort(int *a, int n) {
    for (int i = 0; i < n - 1; i++) {
        
        for (int j = i + 1; j < n-i; j++) {
            bool swapped =false ;
           if(a[j]<a[i]){
            swap(a[j],a[i]);
            swapped=true;
           }
           if(swapped=false){
            return;
           }
    }
}
}

int main() {
    int a[5] = {1,2,3,4,5}; 
    int n = sizeof(a) / sizeof(a[0]); 

 bubble_sort(a, n); 

    cout << "The sorted array is:" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " "; 
    }
    cout << endl; 
    return 0;
}
