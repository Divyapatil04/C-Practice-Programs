#include<stdio.h>

/*
Output:
Enter a Number: 5
5
55
555
5555
55555
555555

*/

int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    for(int i=0; i<=num; i++)
    {
       for(int j=0; j<=i; j++)
       {
        printf("%d",num);
       }
       printf("\n");
    }
    return 0;
}