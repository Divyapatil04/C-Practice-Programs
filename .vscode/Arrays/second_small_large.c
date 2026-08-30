//Find Second Largest and Second Smallest
#include<stdio.h>
int main()
{
    int arr[] = {10, 50, 30, 80, 20, 888, 965, 15, 9, 0};
    int n = 10;

    int largest = arr[0];
    int secondlargest = arr[1];

    int smallest = arr[0];
    int secondsmallest = arr[1];

    for(int i=1; i<n; i++)
    {
        if(arr[i] > largest)
        {
            secondlargest = largest;
           
            largest = arr[i];
        }
        else if(arr[i] > secondlargest)
        {
            secondlargest = arr[i];
        }

        if(arr[i] < smallest)
        {
            secondsmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondsmallest)
        {
            secondsmallest = arr[i];
        }
    }

    printf("Largest: %d\n", largest);
    printf("secondLargest: %d\n", secondlargest);
    printf("Smallest: %d\n", smallest);
    printf("secondSmallest: %d\n", secondsmallest);

    return 0;
}