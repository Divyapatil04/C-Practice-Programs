#include<stdio.h>
//Swap Two Numbers

int main()
{
    int a = 4, b = 8;
    printf("Before swapping : a = %d , b = %d\n", a,b);
    int temp = a;
    a=b; 
    b=temp;
    printf("After swapping : a = %d , b = %d\n", a,b);
  
    //using xor operator
    int x=66, y= 77;
    printf("Before swapping : x = %d , y = %d\n", x,y);
    x = x^y;
    y = y^x;
    x = x^y;
    printf("After swapping : x = %d , y = %d\n", x,y);

    return 0;
}