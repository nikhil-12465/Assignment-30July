
//                                                            iterative call:--

// #include <iostream>
// #include <cstdlib>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     int n;

//     cout << "the number of element in   the array" << endl;
//     cin >> n;
//     int a[n];
//     int p = 10;
//     for (int i = 0; i < n; i++)
//     {
//         a[i] = rand() % p;
//     }
//     sort(a, a + n);

//     // cout<<"the sorted array:"<<endl;
//     // for(int i=0;i<=n;i++){
//     //     cout<<a[i]<<" ";
//     // }
//     cout << endl;

//     int x;
//     cout << "the number you want to  search" << endl;
//     cin >> x;

//     int low = 0;
//     int high = n - 1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;

//         if (a[mid] == x)
//         {
//             cout << "Element found at index " << mid << endl;

//             break;
//         }
//         else if (a[mid] > x)
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }

//     return 0;
// }

//                                                                 recursive call :--->






#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
int binary_search( int a[],int low, int high, int x)

{

    

    while (low <= high)
    {

       
            int mid = (low + high) / 2;
            if (a[mid] == x)
            {
                return 1;
            }

            else if (x > a[mid])
            {

                return  binary_search(a,mid + 1, high, x);
            }
            else
            {
                return  binary_search(a,low, mid - 1, x);
            }
        // }
    }
    return 0;
}

int main()
{
    int n;
    
    int a[100];
    cout << "the number of element in   the array" << endl;
    cin >> n;
   
    for (int i = 0; i < n; i++)
    {
       cin>>a[i];
    }
    sort(a, a + n);

    cout << endl;

    int x;
    cout << "the number you want to  search" << endl;
    cin >> x;

    int low = 0;
    int high = n - 1;
    int k = binary_search(a,low, high, x);
    if (k == 1)
    {
        cout << "number found ";
    }
    else
    {
        cout << "Number not found";
    }

    return 0;
}