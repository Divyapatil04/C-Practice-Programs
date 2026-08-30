#include<stdio.h>
/*
OUTPUT:-
Enter a number: 8
The number 8 is positive and even.

Enter a number: -5
The number -5 is negative and odd.

Enter a number: 0
The number is zero
*/
#include<stdio.h>
int main(){
    
    int num;
    
    printf("Enter a number: ");
    scanf("%d",&num);
    
    if(num>0)
    {
        if(num%2==0)
        {
            printf("The number %d is positive and even",num);
        }
        else
        {
            printf("The number %d is positive and odd",num);
        }
    }
    else if(num<0)
    {
         if(num%2==0)
        {
            printf("The number %d is negative and even",num);
        }
        else
        {
            printf("The number %d is negative and odd",num);
        }
    }
    else{
        printf("The number is zero");
    }
    
    return 0;
}