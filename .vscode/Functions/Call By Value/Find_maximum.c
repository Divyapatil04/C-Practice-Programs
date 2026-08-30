/*
Program 3: Find Maximum
Requirement:
Write a function findMax() that accepts two integers using call by value and returns the greater number.
Input:
25 40
Output:
Maximum = 40
*/

#include<stdio.h>

int findMax(int num1, int num2)
{
    if(num1>num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int main()
{
    int max;

    max = findMax(25, 40);

    printf("Maximum = %d\n", max);

    return 0;
}