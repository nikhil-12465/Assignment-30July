// // we have to print a0+a1x+a2x2+a3x......anxn

// // #include <iostream>
// // #include <vector>
// // #include <math.h>
// // using namespace std;
// // int forpolyequation(vector<int> &a, int n, int x)
// // {
// //     int ans = 0;
// //     for (int i = 0; i < n +1; i++)
// //     {
// //         ans += a[i] * pow(x, i);
// //     }
// //     return ans;
// // }
// // int main()
// // {
// //     int n;
// //     cout << "the degree of polynomial" << endl;

// //     cin >> n;

// //     vector<int> a(n + 1);
// //     for (int i = 0; i < n + 1; i++)
// //     {
// //         cin >> a[i];
// //     }
// //     int x;
// //     cout << "value of x:" << endl;
// //     cin >> x;

// //     int p = forpolyequation(a, n, x);
// //     cout<<"the vallue of this equation is:"<<p<<endl;
// //     return 0;
// // }

// // to print the polynomial and calculate its value also;
// #include <iostream>
// #include <vector>
// #include <cmath>

// using namespace std;

// double evaluatePolynomial(const vector<double>& coefficients, double x) {
//     double result = 0.0;
//     int n = coefficients.size();
//     for (int i = 0; i < n; i++) {
//         result += coefficients[i] * pow(x, i);
//     }
//     return result;
// }

// void printPolynomial(const vector<double>& coefficients) {
//     int n = coefficients.size();// here n is a new variable which is in the scope of print polynomial function only

//     for (int i = 0; i < n; i++) {
//         if (i == 0) {
//             cout << coefficients[i];
//         } else if (coefficients[i] != 0) {
//             cout << " + " << coefficients[i] << "*x^" << i;
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int n;
//     cout << "Enter the degree of the polynomial: ";
//     cin >> n;

//     vector<double> coefficients(n + 1);
//     cout << "Enter the coefficients : " << endl;
//     for (int i = 0; i <= n; i++) {
//         cin >> coefficients[i];
//     }

//     cout << "The polynomial is: ";
//     printPolynomial(coefficients);

//     double x;
//     cout << "Enter the value of x: ";
//     cin >> x;

//     double result = evaluatePolynomial(coefficients, x);
//     cout << "The value of the polynomial is: " << result << endl;

//     return 0;
// }

// // #include <iostream>
// // #include <vector>

// // using namespace std;
// // void printPolynomial(const vector<double> &coefficients, int i )
// // {
// //     int n = coefficients.size();

// //     if (i >= n)
// //     {
// //         return;
// //     }
// //     if (i == 0)
// //     {
// //         cout << coefficients[i];
// //     }
// //     else if(coefficients[i]!=0)
// //     {
// //         cout << "+" << coefficients[i] << "*x^" << i;
// //     }

// //         printPolynomial(coefficients, i + 1);

// // }

// // int main()
// // {
// //     int n;
// //     cout << "Enter the degree of the polynomial: ";
// //     cin >> n;

// //     vector<double> coefficients(n + 1);
// //     cout << "Enter the coefficients : " << endl;
// //     int i;
// //     for (i = 0; i <= n; i++)
// //     {
// //         cin >> coefficients[i];
// //     }

// //     cout << "The polynomial is: ";
// //     printPolynomial(coefficients, 0);

// //     return 0;
// // }

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
double evaluatePolynomial(const vector<double> &a, double x)
{
    double result = 0.0;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        result += a[i] * pow(x, i);
    }
    return result;
}
void printhornor(vector<double> &a, int i)
{
    int n = a.size();

    if (i >= n)
    {
        return;
    }
    else
    {

        if (i < n - 1)
        {
            cout << a[i];
            if (i != n - 2)
            {
                cout << "+x[";
            }
            else
            {
                cout << "+x";
            }
        }
        else
            cout << a[i];
        printhornor(a, i + 1);
        cout << "]";
    }
}
void printpolynomialseries(vector<double> &a)
{

    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << a[i];
        }
        else
        {
            cout << "+" << a[i] << "*x^" << i;
        }
    }
}

    int main()
    {
        int n;
        cout << "Enter the degree of the polynomial: ";
        cin >> n;

        vector<double> a(n + 1);
        cout << "Enter the a's elements : " << endl;

        for (int i = 0; i <= n; i++)
        {
            cin >> a[i];
        }

        cout << "The polynomial is: ";
        printhornor(a, 0);
        cout << endl;

        printpolynomialseries(a);
        cout << endl;
        
      int x;
        cout << "the value  of x is:";
        cin >> x;

        int p = evaluatePolynomial(a, x);
        cout << p << endl;

        return 0;
    }

    #include <iostream>
#include <vector>
#include <cmath>
using namespace std;
double evaluatePolynomial(const vector<double> &a, double x)
{
    double result = 0.0;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        result += a[i] * pow(x, i);
    }
    return result;
}
void printhornor(vector<double> &a, int i)
{
    int n = a.size();

    if (i >= n)
    {
        return;
    }
    else
    {

        if (i < n - 1)
        {
            cout << a[i];
            if (i != n - 2)
            {
                cout << "+x[";
            }
            else
            {
                cout << "+x";
            }
        }
        else
            cout << a[i];
        printhornor(a, i + 1);
        cout << "]";
    }
}

int main()
{
    int n;
    cout << "Enter the degree of the polynomial: ";
    cin >> n;

    vector<double> a(n + 1);
    cout << "Enter the a's elements : " << endl;

    for (int i = 0; i <= n; i++)
    {
        cin >> a[i];
    }

    cout << "The polynomial is: ";
    printhornor(a, 0);
    cout << endl;

    int x;
    cout << "the value  of x is:";
    cin >> x;
    int p = evaluatePolynomial(a, x);
    cout << p << endl;

    return 0;
}