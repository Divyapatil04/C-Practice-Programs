/*
Program 11: Find Maximum and Minimum
Requirement:
Write a function that accepts two integers and returns both:
Maximum
Minimum
Use pointer parameters for the results.
Example:
Input: 30 50
Output:
Maximum = 50
Minimum = 30
*/

#include<stdio.h>
int MaxMin(int a, int b,int *max, int *min)
{
    if(a>b)
    {
        *max = a;
        *min = b;
    }
    else
    {
        *min = b;
        *max = a;
    }
}
int main()
{
    int a = 50, b = 30;
    int max, min;

    MaxMin(a, b, &max, &min);
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}