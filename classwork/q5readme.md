Aim of the Code:
The provided code aims to evaluate a polynomial given its coefficients and the value of x. It also displays the polynomial in a human-readable format.

Working Algorithm:
Input the Degree of the Polynomial:

The user is prompted to enter the degree of the polynomial, which is n. The coefficients for the polynomial will be stored in a vector of size n + 1 (since a polynomial of degree n has n + 1 coefficients).
Input the Coefficients:

The user is asked to enter the coefficients of the polynomial, which are stored in a vector a.
Display the Polynomial:

The function printhornor is called to print the polynomial in a readable format. It recursively constructs the polynomial string by considering the index of each coefficient:
If the coefficient is not the last one, it appends +x[...] to the output.
If it is the last coefficient, it simply appends its value.
Input the Value of x:

The user is prompted to input a value for x, which will be used to evaluate the polynomial.
Evaluate the Polynomial:

The evaluatePolynomial function calculates the polynomial's value at x using the formula:

P(x)=a[0]+a[1]⋅x+a[2]⋅x^2+…+a[n]⋅x^n
 
The pow function is used to compute powers of x.
Output the Result:

The result of the polynomial evaluation is printed to the console.