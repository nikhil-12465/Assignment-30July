// the way by which we do it but i can't undersatand it properly:---
#include <iostream>
using namespace std;
void printTandF(int i, int n, string s)
{

    if (i > n)
    {
        cout << s;
        return;
    }
    else
    {

        printTandF(i + 1, n, s + "T");

        printTandF(i + 1, n, s + "F");
    }
}
int main()
{

    int n;
    cout << "the no of times you want to print T&F" << endl;
    cin >> n;
    int i;
    string s;
    printTandF(1, n, " ");
    return 0;
}