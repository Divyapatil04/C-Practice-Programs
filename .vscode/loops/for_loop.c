#include <stdio.h>

int main()
{
    //print negative and zeros

    int arr[] = {0, -1, 2, 7, 6, -3, 0};
    int i;

    for (i = 0; i < 7; i++)
    {
        if (arr[i] <= 0)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\n\n");
   
    //table
    /*
    1 2 3 
    2 4 6 
    3 6 9 
    4 8 12 
    5 10 15 
    */

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("%d ", i * j);
        }

        printf("\n");
    }

 
    return 0;
}