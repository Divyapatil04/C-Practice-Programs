#include<stdio.h>

/*
OUTPUT:
Enter a Number: 4
Enter a no to count: 1
 1 
 2  3 
 4  5  6 
 7  8  9  10 
 11  12  13  14  15

*/

int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    int n; 
    printf("Enter a no to count: ");
    scanf("%d", &n);

    for(int i=0; i<=num; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf(" %d", n);
            n++;
        }
        printf("\n");
    }
    return 0;

}