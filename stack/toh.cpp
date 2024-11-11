#include <iostream>
#include <stack>
using namespace std;



void tofhonoi(int n, char F, char A, char T, int &noc)
{
    noc++;  
    

    if (n == 1)
    {
        
      cout<<"   move  "<<" "<<F<<"  to  "<<T<<endl;
     
    }
    else
    {
        tofhonoi(n - 1, F, T, A, noc);
        cout<<"   move  "<<F<<"  to  "<<T<<endl;
        tofhonoi(n - 1, A, F, T, noc);
    }

  
}
int main()
{
  
int n;
cin>>n;
    
        int noc = 0;
        char F='F';
        char A='A';
        char T='T';

      

   tofhonoi(n, F, A, T, noc);

       
        cout << "For n = " << n << ": ";
        

        cout << "\nTotal recursive calls made for n = " << n << ": " << noc << endl;
      

    return 0;
}


//  for define the graph:


// #include <iostream>
// #include <stack>
// using namespace std;



// void tofhonoi(int n, char F, char A, char T, int &noc)
// {
//     noc++;  
    

//     if (n == 1)
//     {
        
//     //   cout<<"   move  "<<" "<<F<<"  to  "<<T<<endl;
     
//     }
//     else
//     {
//         tofhonoi(n - 1, F, T, A, noc);
//         // cout<<"   move  "<<F<<"  to  "<<T<<endl;
//         tofhonoi(n - 1, A, F, T, noc);
//     }

  
// }
// int main()
// {
//   for(int n=1;n<=14;n++){

    
//         int noc = 0;
//         char F='F';
//         char A='A';
//         char T='T';

      

//    tofhonoi(n, F, A, T, noc);

       
//         cout << "For n = " << n << ": ";
        

//         cout << "\nTotal recursive calls made for n = " << n << ": " << noc << endl;
//   }
      

//     return 0;
// }
