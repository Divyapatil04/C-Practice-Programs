/*
ARRAYS:=
Read 5 speeds into an array and print them.
Find the sum.
Find the average.
Find the largest number.
Find the smallest number.
*/
#include <stdio.h>

int Sum(int speed[])
{
    int sum = 0;

    for(int i = 0; i < 5; i++)
    {
        sum = sum + speed[i];
    }

    return sum;
}

float Average(int sum)
{
    return (float)sum / 5;
}

int LargestNo(int speed[])
{
    int largest = speed[0];

    for(int i = 1; i < 5; i++)
    {
        if(speed[i] > largest)
        {
            largest = speed[i];
        }
    }

    return largest;
}

int SmallestNo(int speed[])
{
    int smallest = speed[0];

    for(int i = 1; i < 5; i++)
    {
        if(speed[i] < smallest)
        {
            smallest = speed[i];
        }
    }

    return smallest;
}

int main()
{
    int speed[5];
    int sum;
    float average;
    int largest, smallest;

    printf("Enter 5 speeds:\n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &speed[i]);
    }

    printf("\nSpeeds are:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", speed[i]);
    }

    sum = Sum(speed);

    average = Average(sum);

    largest = LargestNo(speed);

    smallest = SmallestNo(speed);

    printf("\n\nSum of 5 speeds = %d\n", sum);
    printf("Average of 5 speeds = %.2f\n", average);
    printf("Largest no = %d\n", largest);
    printf("Smallest no = %d\n", smallest);

    return 0;

}
/*
output:-

Enter 5 speeds:
40 60 30 80 50

Speeds are:
40 60 30 80 50

Sum of 5 speeds = 260
Average of 5 speeds = 52.00
Largest no = 80
Smallest no = 30
*/