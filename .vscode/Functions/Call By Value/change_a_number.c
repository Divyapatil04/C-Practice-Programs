/*
Program 1: Change a Number
Requirement:
Write a C program with a function changeValue() that accepts an integer using call by value and changes its value to 100.
Expected behavior:
Initialize number = 10 in main().
Pass number to changeValue().
Change the parameter inside the function.
Print the value before and after the function call.
Verify that the original value is not changed.
*/

#include<stdio.h>
int changeValue(int x)
{
    x = 100;

    printf("Inside function x = %d\n", x);
}
int main()
{
    int num = 10;

    printf("Before function call number = %d\n", num);

    changeValue(num);

    printf("After function call number = %d\n", num);

    return 0;

    /* Output:-
    Before function call number = 10
    Inside function x = 100
    After function call number = 10

    Explination-In call by value, a copy of the actual argument is passed to the function. 
    Therefore, changes made to the function parameter do not affect the original variable.
    */
}
