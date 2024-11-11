# Parentheses Checker Program in C++

This program checks if an expression has balanced parentheses, braces, and brackets. It verifies that every opening symbol (`(`, `{`, `[`) has a corresponding closing symbol (`)`, `}`, `]`) and that they appear in the correct order.

## How It Works

The program uses a stack to keep track of the opening symbols as it iterates through the expression:
1. **Push** opening symbols (`(`, `{`, `[`) onto the stack.
2. **Pop** the stack when a closing symbol (`)`, `}`, `]`) is encountered and check if it matches the latest opening symbol.
3. If the stack is empty at the end, the expression is balanced; otherwise, it is unbalanced.

### Key Functions

- **checkexpression**: Takes a string as input and returns `1` if the expression is valid (balanced) and `-1` if it is invalid (unbalanced).
  - If any mismatch or unpaired closing symbol is detected, the function returns `-1`.
  - If the stack is empty after processing the entire expression, it indicates that all symbols are balanced.

## Code Structure

- **main**: Accepts an expression as input, calls `checkexpression`, and prints whether the expression is valid or invalid.

