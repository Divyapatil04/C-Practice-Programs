//Create a function to find the largest number.
#include<stdio.h>

int findlargestno(int arr[], int n)
{
    int largest = arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
    }
    return largest;

}
int main()
{
    int arr[5]={ 10, 66, 788, 54, 1000};
    int n = 5;
    int largest;

    largest = findlargestno(arr, n);
    printf("Largest No : %d\n", largest);
    return 0;
}