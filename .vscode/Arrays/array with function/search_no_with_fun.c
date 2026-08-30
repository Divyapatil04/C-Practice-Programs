//Create a function to search an element.
#include<stdio.h>
int Tosearch(int arr[], int n, int search)
{  
    for(int i=0; i<n; i++)
    {
        if(arr[i] == search)
        {
            return i;
        }
    }
    return 1;
}

int main()
{
    int arr[5] = {10,50,68,44,2};
    int n = 5;
    int search;
    int result;

    printf("Enter number to search: ");
    scanf("%d", &search);

    result = Tosearch(arr, n, search);

    if(result != 1)
    {
        printf("Element found at index %d\n", result);
    }
    else
    {
        printf("Element not found\n");
    }


   return 0;
}