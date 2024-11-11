# Infix to Postfix Conversion Program in C++

This program converts an infix expression (standard algebraic notation) to a postfix expression (Reverse Polish Notation) using operator precedence and a stack to handle the conversion.

## How It Works

The program reads an infix expression, processes each character, and converts it to postfix form. It uses operator precedence and parentheses handling to ensure correct order of operations.

### Key Functions

- **priority**: Returns the precedence level of an operator. Higher precedence operators (e.g., `*`, `/`, `^`) are given higher values.
- **infixtopostfix**: Converts an infix expression to postfix by:
  - Adding operands directly to the output string.
  - Using a stack to temporarily hold operators and ensuring they follow precedence rules.
  - Managing parentheses to maintain proper order.

## Code Structure

- **main**: Calls the conversion function with a sample infix expression and displays the postfix result.


Explanation of Infix to Postfix Conversion

The algorithm processes the infix expression from left to right, converting it to postfix form using 

operator precedence:

Operators (+, -, *, /, ^) are ordered by precedence.
Operands (variables or numbers) are added directly to the output.
Parentheses ensure correct precedence by grouping parts of the expression.


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
