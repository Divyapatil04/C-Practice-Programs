#include<stdio.h>
/*   
OUTPUT:-  
Enter a no: 5
 * 
 *  * 
 *  *  * 
 *  *  *  * 
 *  *  *  *  * 
*/

int main()
{
    int num;
    printf("Enter a no: ");
    scanf("%d", &num);
    for(int i=0; i<num; i++)
    {
        for(int j=0; j<=i ; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}