#include<stdio.h>
//Find the Largest Number Among Three Numbers
int main()
{
    long long num1, num2, num3;
    long long largest;

    printf("Enter three number's: ");
    scanf("%lld %lld %lld",&num1,&num2,&num3);
    if(num1>=num2 && num1>=num3)
    {
        largest = num1;   
    }
    else if(num2>=num1 && num2>=num3)
    {
        largest = num2;   
    }
    else
    {
        largest = num3;   
    }

    printf("Largest No is %lld", largest);

    return 0;
}