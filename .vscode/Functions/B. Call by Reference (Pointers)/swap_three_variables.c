/*
Program 12: Swap Three Variables
Requirement:
Write a function that accepts three integer addresses and cyclically swaps their values.
Example:
Before:
a = 10
b = 20
c = 30
After:
a = 30
b = 10
c = 20
*/
#include<stdio.h>
int SwapVariables(int *a, int *b, int *c)
{
    int temp = *c; 
    *c = *b;
    *b = *a;
    *a = temp;
}
int main()
{
    int a = 10, b= 20, c = 30;

    printf("Before:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    SwapVariables(&a, &b, &c);

    printf("After:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;
}