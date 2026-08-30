//Create a function to find the sum.
#include<stdio.h>

int printSum(int arr[], int n)
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[5];
    int n = 5;

    printf("Enter 5 elements of array : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
   int sum =  printSum(arr,n);
   printf("Sum : %d\n", sum);
   return 0;

}