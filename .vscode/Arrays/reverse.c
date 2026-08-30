//Print Array in Reverse
#include<stdio.h>
int main()
{
    int arr[]={47, 88, 655, 65, 97, 0};
    int n = 6;
    
    printf("Reverse Array: ");
    for(int i = n-1; i>=0; i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
    
}
/*
#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int rev[5];
    int n = 5;

    for(int i = 0; i < n; i++)
    {
        rev[i] = arr[n - 1 - i];
    }

    printf("Original array: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nReverse array: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", rev[i]);
    }

    return 0;

    //output-
    //Original array: 10 20 30 40 50
    //Reverse array: 50 40 30 20 10   
}*/