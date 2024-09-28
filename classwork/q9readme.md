Aim
To generate and print all possible combinations of 'T' (True) and 'F' (False) for a specified number of times (n).

Working
The function printTandF is a recursive function that:

Takes an index i, the maximum index n, and a string s representing the current combination of 'T' and 'F'.
If i exceeds n, it prints the string s.
Otherwise, it recursively calls itself twice:
Once with 'T' appended to s.
Once with 'F' appended to s.
The main function prompts the user for the number of times to print 'T' and 'F', initializes the string, and calls printTandF starting with index 1