#include <iostream>
#include <math.h>
using namespace std;

int power(int x, int n)
{
    int m = pow(x, n / 2);
    if (n == 0)
   
        return 1;
   
    if (n % 2 == 0)
   
        return m * m;
   
    else if (n > 0)
   
        return x * m * m;
   
}
int main()
{

    int x;
    cin >> x;
    int n;
    cin >> n;
    cout << "power of x to the power n in less than n iterations:->>>>" << power(x, n) << endl;
    return 0;
}