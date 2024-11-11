# Infix to Prefix Conversion Program in C++

This program converts an infix expression (standard algebraic notation) to a prefix expression (Polish Notation) by reversing the infix expression, converting it to postfix, and then reversing the result. The program accounts for operator precedence and associativity.

## How It Works

The algorithm involves:
1. **Reversing the Infix Expression**: Parentheses are swapped (i.e., `(` becomes `)` and vice versa).
2. **Converting Reversed Infix to Postfix**: The reversed infix is treated as postfix, with operators and operands ordered using precedence rules.
3. **Reversing the Postfix Expression**: The result of the postfix conversion is reversed to give the prefix form.

### Key Functions

- **reverse**: Reverses the input infix expression while handling parentheses.
- **associat**: Determines associativity (left-to-right or right-to-left) of operators of the same precedence.
- **precedence**: Returns the precedence level of an operator.
- **reverseinfixtopostfix**: Converts the reversed infix expression to postfix by using a stack to apply operator precedence and associativity.

## Code Structure

- **main**: Defines a sample infix expression, performs the conversion, and outputs the prefix result.

## How to Use the Program


Explanation of Infix to Prefix Conversion

The program processes the infix expression by:

Reversing the infix expression.
Using a stack to handle operators in the reversed infix expression according to precedence and associativity.
Reversing the final postfix result to obtain the prefix expression.

Supported Operators
+ : Addition
- : Subtraction
* : Multiplication
/ : Division
^ : Exponentiation

Time Complexity
O(n), where n is the length of the infix expression.

Space Complexity
O(n) due to the stack used for operators.