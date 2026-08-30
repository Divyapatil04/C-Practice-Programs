#include<stdio.h>

//Argument, Return value
//Function takes arguments and returns a value
int add( int a, int b)
{
    return a + b;
}
int main()
{
    int result;

    result = add(100, 2560);

    printf("Sum = %d\n", result);

    return 0;
}
