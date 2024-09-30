#include <cstdlib>
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int main()
{
// FOR  BESTCASE TIME COMPLEXITY :
    //   auto start = high_resolution_clock::now();  

    long size = 50;
    // long num;
    //     cout << "the number :";
    //     cout << endl;
    //     cin >> num;
       

    while (size != 500000000)
    {
  auto start = high_resolution_clock::now();
     
        // long N = 100000000;
        long arr[size];

        

        // for (int i = 0; i < size; i++)
        // {
        //     arr[i] = rand()%N ;
        // }
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == arr[0])
            {
                // cout << "the number found" << endl;
                break;
            }
          
        }


  
        auto end = high_resolution_clock::now();
        auto duration = duration_cast<nanoseconds>(end - start);
        cout << "size= " << size <<"      "<< "time= " << duration.count() << endl;

        size*=10;
    }

    return 0;
}



