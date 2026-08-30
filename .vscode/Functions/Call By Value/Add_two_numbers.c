/*
Program 2: Add Two Numbers
Requirement:
Write a function add() that accepts two integers using call by value and returns their sum.
Example:
Input:
10 20
Output:
Sum = 30
*/

#include<stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int sum;

    sum = add(10, 20);

    printf("Sum = %d\n", sum);

    return 0;
}