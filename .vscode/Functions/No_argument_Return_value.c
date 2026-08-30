#include<stdio.h>

//No argument, Return value
//Function takes no argument, but returns a value.
int getValue(void)
{
   int a= 100;
   return a;
}
int main()
{
    int result;

    result = getValue();

    printf("Value = %d\n", result);

    return 0;
}