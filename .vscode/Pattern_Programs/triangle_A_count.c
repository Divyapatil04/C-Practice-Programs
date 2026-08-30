#include<stdio.h>
/* 
OUTPUT:- 
Enter a no: 6
Enter a single Character: A 
A 
B C 
D E F 
G H I J 
K L M N O 
P Q R S T U 
V W X Y Z [ \  

*/

int main()
{
    int n;
    char ch;
    printf("Enter a no: ");
    scanf("%d", &n);
    printf("Enter a single Character: ");
    scanf(" %c", &ch);

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}