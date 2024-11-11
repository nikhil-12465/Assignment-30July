#include <iostream>
#include <stack>
#include <string>
using namespace std;

// function to reverse a string :
string reverse(string s) {
    int n = s.size();
    string reversed;

  
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '(') {
            reversed += ')';  
        } else if (s[i] == ')') {
            reversed += '(';  
        } else {
            reversed += s[i];  
        }
    }

    return reversed;
}



// function to return associativity of the  same  precedence operaator
string associat(char op1, char op2)
{
    if (op1=='^' && op2=='^'){
        return "R to L";
    }
    return  "L to R";
}

// Function to return precedence of operators
int precedence(char op)
{
    if (op == '+' || op == '-')
    {
        return 1;
    }
    if (op == '*' || op == '/')
    {
        return 2;
    }
    if (op == '^')
    {
        return 3;
    }
    return 0;
}

// Function to convert infix to postfix
string reverseinfixtopostfix(string &r)
{
    int n = r.size();
    stack<char> st;
    string ans;

    for (int i = 0; i < n; i++)
    {
        // If the character is an operand (A-Z, a-z, 0-9)
        if ((r[i] >= 'A' && r[i] <= 'Z') || (r[i] >= 'a' && r[i] <= 'z') || (r[i] >= '0' && r[i] <= '9'))
        {
            ans += r[i];
        }
        // If the character is an opening parenthesis
        else if (r[i] == '(')
        {
            st.push(r[i]);
        }
        // If the character is a closing parenthesis
        else if (r[i] == ')')
        {
            // Pop from stack and add to output until opening parenthesis is found
            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            // Pop the '(' from the stack
            st.pop();
        }
        
        // If the character is an operator
        else
        {
            while (!st.empty() && precedence(st.top()) > precedence(r[i]))
            {
                ans += st.top();
                st.pop();
               
            }
           
           // for handling the preedence of the same operator :
          if (!st.empty() && precedence(st.top()) == precedence(r[i]))
            {
                if (associat(r[i],st.top()) == "R to L")
                {
                    ans += st.top();
                    st.pop();
                }
            }
           st.push(r[i]);
        }
    }

    // Pop all remaining operators from the stack
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    return ans;
}

int main()
{
    string s = "a+b-c+d*(e-f)";
    string r=reverse(s);
    cout<<r<<endl;
    string p=reverseinfixtopostfix(r);
    cout<<p<<endl;
    string prefix=reverse(p);
    cout<<"the prefix of "<<s<<"  is   "<<prefix<<endl;


    return 0;
}
