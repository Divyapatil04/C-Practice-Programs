//create a function to print even and odd numbers
#include<stdio.h>

void Even(int arr[], int n)
{
    printf("Even numbers: ");
    for(int i=0; i<n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
}
void Odd(int arr[], int n)
{
     printf("\nOdd numbers: ");
    for(int i=0; i<n; i++)
    {
        if(arr[i] % 2 != 0)
        {
             printf("%d ", arr[i]);
        }
    }
}
int main()
{
    int arr[]={12, 65, 99, 56, 8};
    int n = 5;

    Even(arr, n);
    Odd(arr, n);
   

    return 0;

}