
// from recursive call :

// #include <iostream>
// #include <cmath>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int partition(vector<int> &a, int low, int high)
// {
//     int p = a[low];
//     int i = low;
//     int j = high + 1;

//     while (i < j)
//     {

//         do
//         {
//             i = i + 1;
//         } while (i <= high && a[i] <= p);
//         do
//         {
//             j = j - 1;
//         } while (j >= low && a[j] > p);
//         if (i < j)
//         {
//             swap(a[i], a[j]);
//         }
//     }

//     swap(a[low], a[j]);
//     return j;
// }

// void select(vector<int> &a, int low, int high, int k)
// {
//     int n = a.size();

//     int j = partition(a, low, high);

//     if (j == k)
//     {
//         cout << "the kth smallest value is :" <<a[j]<< endl;
//     }
//     else
//     {
//         if (k < j)
//         {
//             select(a, low, j - 1, k);
//         }
//         else
//         {
//             select(a, j + 1, high, k);
//         }
//     }
// }
// int main()
// {

//     int n;
//     cout << "the number of element you want in the array is :" << endl;
//     cin >> n;
//     vector<int> a(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int low = 0;
//     int high = n - 1;

//     int k;
//     cout << "put the value which you want to enter in..  for the kth smallest value" << endl;
//     cin >> k;
//     select(a, low, high, k);

//     return 0;
// }

// from itertive call  :

#include <iostream>
#include <cmath>
#include <algorithm>
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

void select(vector<int> &a, int low, int high, int k)
{
    while (low < high)
    {
        int j=partition(a,low,high);
        if (j == k)
        {
            cout << "the kth smallest value is :" << a[j] << endl;
            break;
        }
        else
        {
            if (k < j)
            {
                high = j-1;
            }
            else
            {
                low = j+1;
            }
        }
    }
}
int main()
{

    int n;
    cout << "the number of element you want in the array is :" << endl;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int low = 0;
    int high = n - 1;

    int k;
    cout << "put the value which you want to enter in..  for the kth smallest value" << endl;
    cin >> k;
    select(a, low, high, k-1);

    return 0;
}