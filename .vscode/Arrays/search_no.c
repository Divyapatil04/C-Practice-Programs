//Search for a given number.
#include<stdio.h>
int main()
{
    int arr[] = {10, 25, 30, 45, 50};
    int n = 5;
    int search;
    int found = 0;

    printf("Enter number to search: ");
    scanf("%d", &search);

    for(int i=0; i<n; i++)
    {
        if(arr[i] == search)
        {
            printf("Number found at index : %d\n", i);
            found = 1;
            break;
        }
    }
    if(found == 0)
    {
        printf("Number not found\n");
    }
    return 0;
}