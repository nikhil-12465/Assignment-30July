#include <iostream>
#include <vector>
using namespace std;

int priority(vector<int> &a, int low, int high) {
    int p = a[low];
    int i = low;
    int j = high + 1;

    while (i < j) {
        do {
            i = i + 1;
        } while (i <= high && a[i] <= p);
        do {
            j = j - 1;
        } while (j >= low && a[j] > p);
        if (i < j) {
            swap(a[i], a[j]);
        }
    }

    swap(a[low], a[j]);
    return j;
}

void select(vector<int> &a, int low, int high, int x) {
    int n = a.size();
    while (low <= high) {
        int j = priority(a, low, high);
        if (j == x) {
            cout << "the top kth element is : " << a[j] << " ";
            
            for (int i = j + 1; i < n; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
            return;
        } else if (x < j) {
            high = j - 1;  
        } else {
            low = j + 1;   
        }
    }
}

int main() {
    int n;
    cout << "The number of elements you want in the array: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int k;
    cout << "Enter the value of k for the k-th largest element: ";
    cin >> k;

    int x = n - k;  
    select(a, 0, n-1 , x);

    return 0;

}




