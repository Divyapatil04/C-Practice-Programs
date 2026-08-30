#include<stdio.h>
/* 
OUTPUT:- 
Enter a no: 5                                                                                                                                 
Enter a single letter which you want to print: a                                                                                              
a        
aa
aaa
aaaa
aaaaa

*/
int main()
{
    int num; 
    char ch;
    printf("Enter a no: ");
    scanf("%d",&num);
    printf("Enter a single letter which you want to print: ");
    scanf(" %c", &ch);   // Space before %c

    for(int i=0; i<num; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}
