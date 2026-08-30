#include<stdio.h>
int main()
{
    int num = 121;
    int  rev = 0, temp=num;
    while(num)
    {
        rev = rev * 10 + num % 10;
        num = num /10;

    }

    if(temp == rev)
    {
        printf("Number is a palindrome");  //ans
    }
    else
    {
        printf("Number is not a palindrome");
    }
    return 0;
}