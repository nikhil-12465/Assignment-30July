#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> b(n);

    for (int j = 0; j < n; j++) {
        int m = 1;
        for (int i = 0; i < n; i++) {
            if (j != i) {
                m *= a[i];
            }
        }
        b[j] = m;
    }

    cout << "The resulting array is: ";
    for (int j = 0; j < n; j++) {
        cout << b[j] <<endl;
    }
    cout << endl;

    return 0;
}