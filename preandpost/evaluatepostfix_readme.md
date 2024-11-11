# Postfix Expression Evaluation Program in C++

This program evaluates a postfix expression (Reverse Polish Notation) entered by the user. It uses a stack to process operators and operands, supporting addition, subtraction, multiplication, and division operations.

## How It Works

The program reads the postfix expression, processes each character, and evaluates the expression using a stack:
- When a digit is encountered, it's treated as an operand and pushed onto the stack.
- When an operator is encountered, the program pops two operands from the stack, performs the operation, and pushes the result back onto the stack.
- At the end of the expression, the final result is the single element remaining in the stack.

### Key Functions

- **performOperation**: Executes an arithmetic operation (addition, subtraction, multiplication, division) on two operands.
- **evaluatepostfix**: Processes the postfix expression, using a stack to evaluate the result based on the operators and operands in the expression.

## Code Structure

- **main**: Takes user input for the postfix expression, calls the evaluation function, and displays the result.



Explanation of Postfix Expression Evaluation


A postfix expression is evaluated from left to right, with operators following their operands. This format allows the expression to be evaluated without the need for parentheses to denote operator precedence.

Sample Postfix Evaluation Steps

For the expression 46*10-5+:

Push 4 and 6 onto the stack.
* pops 4 and 6, pushes 4 * 6 = 24.
Push 10.
- pops 24 and 10, pushes 24 - 10 = 14.
Push 5.
+ pops 14 and 5, pushes 14 + 5 = 9.


Supported Operators
+ : Addition
- : Subtraction
* : Multiplication
/ : Division (assumes no division by zero)


Time Complexity
O(n), where n is the length of the postfix expression.


Space Complexity
O(n) for the stack used in processing operands.

