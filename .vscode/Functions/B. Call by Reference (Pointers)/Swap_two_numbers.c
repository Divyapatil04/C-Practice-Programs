/*
Program 7: Swap Two Numbers ⭐
Requirement:
Write a function swap() using pointers to swap two integers.
Before swapping:
a = 10
b = 20
After swapping:
a = 20
b = 10
Constraint:
Do not use a global variable.
*/

#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = * y;
    *y = temp;
}

int main()
{
    int a = 10, b = 20;

    printf("Before swapping:\n");
    printf("a = %d\nb = %d\n",a, b);

    swap(&a, &b);
    printf("After swapping:\n");
    printf("a = %d\nb = %d\n",a, b);

    return 0;
}