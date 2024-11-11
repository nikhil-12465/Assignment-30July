#include <iostream>
#include <stack>
#include <string>
#include <cctype>  // For isdigit()
using namespace std;

// Function to perform the required operation
int performOperation(char operation, int op1, int op2) {
    switch (operation) {
        case '+': return op1 + op2;
        case '-': return op1 - op2;
        case '*': return op1 * op2;
        case '/': return op1 / op2;  // Assuming op2 is not zero
    }
    return 0;  // Just in case an invalid operator is encountered
}

// Function to evaluate the s1 expression
int evaluatepostfix(string &s1) {
    stack<int> s;
    int i = 0;
    
    while (i < s1.length()) {
        char ch = s1[i];
        
        // If the current character is a digit, handle multi-digit numbers
        if (isdigit(ch)) {
            int num = 0;
            // Keep reading until the entire number is processed
            while (i < s1.length() && isdigit(s1[i])) {
                num = num * 10 + (s1[i] - '0');
                i++;
            }
            s.push(num);
        } 
        // If the character is an operator, pop two elements from the stack and perform the operation
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            int operand2 = s.top(); s.pop();
            int operand1 = s.top(); s.pop();
            int result = performOperation(ch, operand1, operand2);
            s.push(result);
            i++;
        } else {
            // Ignore any spaces or non-digit/non-operator characters
            i++;
        }
    }

    // The final result will be the last element in the stack
    return s.top();
}

int main() {
    string s1;
    cout << "Enter the postfix expression: ";
    getline(cin,s1); // Example s1 expression: 46*10-5+
    int result = evaluatepostfix(s1);
    cout << "The result of the  postfix expression is: " << result << endl;
    return 0;
}

