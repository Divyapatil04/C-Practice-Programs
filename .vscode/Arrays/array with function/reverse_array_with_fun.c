//Create a function to reverse an array.
#include<stdio.h>
void reverseArray(int arr[], int rev[], int n)
{
    for (int i = 0; i < n; i++)
    {
        rev[i] = arr[n-i-1];
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int rev[5];

    reverseArray(arr, rev, n);    

    printf("Reverse Array: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", rev[i]);
    }
    return 0;

}