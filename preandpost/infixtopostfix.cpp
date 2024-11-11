// my first logic:
#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int priority(char c)
{
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/')
        return 2;
    if (c == '^')
        return 3;
    return 0;
}

string infixtopostfix(string &s)
{
    string ans;
    stack<char> st;
    int n = s.size();
    int i = 0;
    while (i < n)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            ans += s[i];
        }
        else if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            while (!st.empty() && (st.top() == '(' || st.top() == '{' || st.top() == '['))
            {

                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && priority(s[i]) <= priority(st.top()))
            {
                ans += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        i++;
    }

    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    return ans;
}

int main()
{
    string s = "4*6-10+5";

    string p = infixtopostfix(s);

    cout << "the postfix is:" << p << endl;
    return 0;
}


// my second logic with somme errors :


//for infix to prefix :

// #include <iostream>
// #include <stack>
// #include <string>
// using namespace std;
// // function to return associativity of the  same  precedence operaator
// char associat(char op1, char op2)
// {
//     if (op1 == '^' && op2 == '^')
//     {
//         return 'R to L';
//     }
//     else
//     {
//         return 'L to R';
//     }
// }

// // Function to return precedence of operators
// int precedence(char op)
// {
//     if (op == '+' || op == '-')
//     {
//         return 1;
//     }
//     if (op == '*' || op == '/')
//     {
//         return 2;
//     }
//     if (op == '^')
//     {
//         return 3;
//     }
//     return 0;
// }

// // Function to convert infix to postfix
// string reverseinfixtopostfix(string &r)
// {
//     int n = r.size();
//     stack<char> st;
//     string ans;

//     for (int i = 0; i < n; i++)
//     {
//         // If the character is an operand (A-Z, a-z, 0-9)
//         if ((r[i] >= 'A' && r[i] <= 'Z') || (r[i] >= 'a' && r[i] <= 'z') || (r[i] >= '0' && r[i] <= '9'))
//         {
//             ans += r[i];
//         }
//         // If the character is an opening parenthesis
//         else if (r[i] == '(')
//         {
//             st.push(r[i]);
//         }
//         // If the character is a closing parenthesis
//         else if (r[i] == ')')
//         {
//             // Pop from stack and add to output until opening parenthesis is found
//             while (!st.empty() && st.top() != '(')
//             {
//                 ans += st.top();
//                 st.pop();
//             }
//             // Pop the '(' from the stack
//             st.pop();
//         }
//         // If the character is an operator
//         else
//         {
//             while (!st.empty() && precedence(st.top()) >= precedence(r[i]))
//             {
//                 ans += st.top();
//                 st.pop();
//                 st.push(r[i]);
//             }
//             while (!st.empty() && precedence(st.top()) <= precedence(r[i]))
//             {
//                 st.push(r[i]);
//             }
//             while (!st.empty() && precedence(st.top()) == precedence(r[i]))
//             {
//                 if (associat(st.top(),r[i]) == 'R to L')
//                 {
//                     ans += st.top();
//                     st.pop();
//                     st.push(r[i]);
//                 }
//                 else
//                 {
//                     st.push(r[i]);
//                 }
//             }
//         }
//     }

//     // Pop all remaining operators from the stack
//     while (!st.empty())
//     {
//         ans += st.top();
//         st.pop();
//     }

//     return ans;
// }

// int main()
// {
//     string infix = "a+b-c+d*(e-f)";
//     cout << "Postfix expression: " << reverseinfixtopostfix(infix) << endl;
//     return 0;
// }