//Create a function to print an array.
#include<stdio.h>

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[] = { 10, 20 ,30, 40, 50};
    int n = 5;

    printArray(arr, n);
    return 0;

}