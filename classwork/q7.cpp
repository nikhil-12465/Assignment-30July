#include <iostream>
using namespace std;

void inputarray(int a[], int n) {
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
}


void printarray(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}


void binarySearch(int a[], int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (a[mid] == x) {
            cout << "Element found at index: " << mid << endl;
            return;
        }
        if (a[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    cout << "Element not found in the array:" << endl;
}


void updateelement(int a[], int n, int x, int i) {
    if (i >= 0 && i < n) {
        a[i] = x;
        cout << "Element updated successfully:" << endl;
    } else {
        cout << "Invalid index:" << endl;
    }
}


void insertelement(int a[], int& n, int x, int i) {
    if (i >= 0 && i <= n ) {
        for (int j = n; j > i; --j) {
            a[j] = a[j - 1];
        }
        a[i] = x;
        ++n; 
        cout << "Element inserted successfully." << endl;
    } else {
        cout << "Invalid index or array is full." << endl;
    }
}


void sortarray(int a[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
    cout << "Array sorted successfully." << endl;
}


void deleteelement(int a[], int& n, int i) {
    if (i >= 0 && i < n) {
        for (int j = i; j < n - 1; ++j) {
            a[j] = a[j + 1];
        }
        --n; 
        cout << "Element deleted successfully." << endl;
    } else {
        cout << "Invalid index." << endl;
    }
}

void reversearray(int a[], int n) {
    for (int i = 0; i < n / 2; ++i) {
        swap(a[i], a[n - 1 - i]);
    }
    cout << "Array reversed successfully." << endl;
}

int main() {
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    int a[n]; 
    inputarray(a, n);
    printarray(a, n);

    int i;
    do {
     
        
        cout << "1. Search an element in the array" << endl;
        cout << "2. Update element in the array" << endl;
        cout << "3. Insert an element in the array" << endl;
        cout << "4. Sort the array" << endl;
        cout << "5. Delete an element from the array" << endl;
        cout << "6. Reverse the array" << endl;
        cout << "7. Exit" << endl;
        cout<<endl;
      
        cin >> i;

        switch (i) {
           
            case 1: {
                int x;
                cout << "Enter the number you want to search in the array: ";
                cin >> x;
                sortarray(a, n); 
                binarySearch(a, n, x);
                break;
            }
            case 2: {
                int x, i;
                cout << "Enter the index to update: ";
                cin >> i;
                cout << "Enter the new value: ";
                cin >> x;
                updateelement(a, n, x, i);
                printarray(a, n);
                break;
            }
            case 3: {
                int x, i;
                cout << "Enter the position to insert: ";
                cin >> i;
                cout << "Enter the number you want to insert: ";
                cin >> x;
                insertelement(a, n, x, i);
                printarray(a, n);
                break;
            }
            case 4:
                sortarray(a, n);
                printarray(a, n);
                break;
            case 5: {
                int i;
                cout << "Enter the position of the element to delete: ";
                cin >> i;
                deleteelement(a, n, i);
                printarray(a, n);
                break;
            }
            case 6:
                reversearray(a, n);
                printarray(a, n);
                break;
            case 7:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid option Please choose a valid option" << endl;
                break;
        }
    } while (i !=7 ); 

    return 0;
}
