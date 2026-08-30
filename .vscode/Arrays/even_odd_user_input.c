//Count even and odd numbers sepated even nos and odd nos and take array size and elements from the user
#include<stdio.h>

int main()
{
    int n; 
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of array: ");
    for(int i=0; i<n; i++)
    {
       scanf("%d", &arr[i]);
    }

    printf("Even Numbers are: ");
    for(int i=0; i<n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\nOdd Numbers are: ");
    for(int i=0; i<n; i++)
    {
        if(arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
/*
Enter size of array: 5
Enter elements of array: 234 643 120 667 53
Even Numbers are: 234 120 
Odd Numbers are: 643 667 53 
*/