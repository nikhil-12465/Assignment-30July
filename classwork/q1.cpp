
// best case of binary search :
#include <cstdlib>
#include <iostream>
#include <chrono>
#include<algorithm>
using namespace std;
using namespace std::chrono;
int main()
{

    //   auto start = high_resolution_clock::now();  

    long size = 50;
    long num;
        cout<< "the number :";
        cout<< endl;
        cin >> num;
       

    while (size != 500000000)
    {
  auto start = high_resolution_clock::now();
     
        // long N = 100000000;
        long arr[size];

        

        // for (int i = 0; i < size; i++)
        // {
        //     arr[i] = rand()%N ;
        // }
        // sort(arr,arr+size);
        int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        arr[mid]==num;
        break;
        
    }

  
        auto end = high_resolution_clock::now();
        auto duration = duration_cast<nanoseconds>(end - start);
        cout<< "size= " << size <<"      "<< "time= " << duration.count() << endl;

        size*=10;
    }

    return 0;
}



