#include <iostream>
#include <vector>

using namespace std;

void heapify(vector<int> &a, int n, int i) {
    int left = 2 * i;
    int right = 2 * i + 1;
    int largest;

    if (left < n && a[left] > a[i]) {
        largest = left;
    } else {
        largest = i;
    }

    if (right < n && a[right] > a[largest]) {
        largest = right;
    }

    if (largest != i) {
        swap(a[i], a[largest]);
        heapify(a, n, largest);
    }
}

void buildHeap(vector<int> &a, int n) {
    for (int i = n / 2; i >= 0; i--) {
        heapify(a, n, i);
    }
}

void heapSort(vector<int> &a, int n) {
    buildHeap(a, n);
    for (int i = n - 1; i > 0; i--) {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}

int main() {
    int n;
    cout << "The size of the array:" << endl;
    cin >> n;

    vector<int> a(n);
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    heapSort(a, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
