#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &a, int low, int high)
{
    int p = a[low];
    int i = low;
    int j = high + 1;

    while (i < j)
    {

        do
        {
            i = i + 1;
        } while (i <= high && a[i] <= p);
        do
        {
            j = j - 1;
        } while (j >= low && a[j] > p);
        if (i < j)
        {
            swap(a[i], a[j]);
        }
    }

    swap(a[low], a[j]);
    return j;
}

void quick_sort(vector<int> &a, int low, int high)
{
    if (low < high)
    {
        int z = partition(a, low, high);
        quick_sort(a, low, z);
        quick_sort(a, z + 1, high);
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements in the list: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int low = 0;
    int high = n - 1;

    // int pivotPosition = partition(a, low, high);

    // cout << "Array after partitioning around the pivot: ";
    // for (int i = 0; i < n; i++) {
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    // cout << "The pivot position is: " << pivotPosition << endl;

    // quick_sort ---->>

    quick_sort(a, low, high);

    cout << "Array after sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
