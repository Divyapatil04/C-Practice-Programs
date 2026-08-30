/*
Program 6: Change Original Value
Requirement:
Write a function changeValue() that accepts the address of an integer and changes the original value to 100.
Expected:
Before function call:
number = 10
Inside function:
number = 100
After function call:
number = 100
*/

#include<stdio.h>
int changeValue(int *ptr)
{
    *ptr = 100;
    printf("Inside function:\n");
    printf("number = %d\n", *ptr);
}

int main()
{
    int number = 10;

    printf("Before function call:\n");
    printf("number = %d\n", number);

    changeValue(&number);

    printf("After function call:\n");
    printf("number = %d\n", number);

    return 0;

    /*We pass the address of the variable to the function using a pointer. 
    By dereferencing the pointer (*ptr), we can modify the original variable.
    */
}