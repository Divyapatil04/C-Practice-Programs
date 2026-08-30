#include<stdio.h>
int main()
{
    //Check Whether a Given Number is Even or Odd using if else
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num % 2 == 0)
    { 
       printf("Even");
    }
    else
    { 
       printf("Odd");
    }
    return 0;
}