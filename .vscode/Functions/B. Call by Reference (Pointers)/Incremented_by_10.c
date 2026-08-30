/*
Program 9: Increment by 10
Requirement:
Write a function incrementByTen() that accepts an integer address and increases the original variable by 10.
Input: 50
Output: 60
*/
#include<stdio.h>

int incrementByTen(int num)
{
    return num + 10;
}
int main()
{ 
    int num = 50;
    num = incrementByTen(num);
    printf("Output: %d",num);
}