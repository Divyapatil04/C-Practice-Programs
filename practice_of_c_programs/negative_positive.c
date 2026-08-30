#include<stdio.h>
//Check Whether a Number is Positive or Negative
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num>0)
    {
        printf("%d is Positive", num);
    }
    else if(num<0)
    {
        printf("%d is Negative", num);
    }
    else
    {
        printf("%d is Zero", num);
    }
    return 0;
}