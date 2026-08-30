/*
Program 8: Increment a Variable
Requirement:
Write a function:
increment()
that accepts the address of an integer and increments its value by 1.
Before: count = 10
After: count = 11
*/
#include<stdio.h>

int increment(int count)
{
    count = count + 1;
    return count;
}
int main()
{
    int count = 10;
    printf("Before: count = %d\n", count);

    count = increment(count);
    printf("After: count = %d\n", count);
   
    return 0;
}