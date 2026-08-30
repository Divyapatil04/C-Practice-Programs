/*
Program 13: Quotient and Remainder
Requirement:
Write a function that accepts two integers and calculates both:
quotient
remainder
Return both results to main() using pointer parameters.
Example:
Input:
17 5
Output:
Quotient = 3
Remainder = 2
*/
#include<stdio.h>

void calculate(int a, int b, int *quotient, int *remainder)
{
    *quotient = a / b;
    *remainder = a % b;
}

int main()
{
    int a = 17, b = 5;
    int quotient, remainder;

    calculate( a, b, &quotient, &remainder);
    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);
    return 0;
}