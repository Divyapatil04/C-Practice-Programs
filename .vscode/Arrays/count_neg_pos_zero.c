//Count positive, negative and zero.
#include<stdio.h>

int main()
{
    int arr[] = {10, -5, 0, 25, -8, 0, 15};
    int n = 7;

    int positive = 0;
    int negative = 0;
    int zero = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > 0)
        {
            positive++;
        }
        else if(arr[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    printf("Positive numbers = %d\n", positive);
    printf("Negative numbers = %d\n", negative);
    printf("Zero = %d\n", zero);

    return 0;
}