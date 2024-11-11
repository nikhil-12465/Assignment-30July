#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
int checkexpression(string &s)
{
    int n = s.size();
int i=0;
    stack<char> s1;
    while (i < n)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            s1.push(s[i]);
        }
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            if (s1.empty())
            {
                return -1;
            }

            char top=s1.top();
            s1.pop();

            if(s[i]==')' && top!='('||s[i]=='}' && top!='{'||s[i]==']' && top!='[')
            {
                return -1;
            }
        }
        i++;
    }
     if (!s1.empty()) {
        return -1;
     
    }
  
    return 1;  
}
int main()
{
    string s;
    cout<<"the expression you wanna to check:"<<endl;
    cin >> s;
    int a = checkexpression(s);
    if (a == -1)
    {
        cout << "invalid expression :" << endl;
    }
    else if(a==1)
    {
        cout << "valid expression :"<<endl;
    }
    return 0;
}