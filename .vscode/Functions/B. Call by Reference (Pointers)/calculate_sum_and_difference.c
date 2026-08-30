/*
Program 10: Calculate Sum and Difference
Requirement:
Create a function:
calculate()
that accepts two numbers and addresses of two result variables.
The function must calculate:
sum
difference
and store the results in the variables supplied by the caller.
Example
Input: 50 20
Output:
Sum = 70
Difference = 30
*/
#include<stdio.h>
int calculate(int a, int b, int *sum, int *differece)
{
    *sum = a + b;
    *differece = a - b;
}
int main()
{
    int a = 50, b = 20;
    int sum, differece;

    calculate( a, b, &sum, &differece);
    printf("Sum = %d\n", sum);
    printf("Difference = %d", differece);
    return 0;
}