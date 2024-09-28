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