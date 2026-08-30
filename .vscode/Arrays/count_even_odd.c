//Count even and odd numbers without function
#include <stdio.h>

int main()
{
    int arr[] = {55, 88, 77, 324, 87, 89};
    int n = 6;
    int even = 0;
    int odd = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Count of even numbers = %d\n", even);
    printf("Count of odd numbers = %d\n", odd);

    return 0;
}
/*
Output
Count of even numbers = 2
Count of odd numbers = 4
*/