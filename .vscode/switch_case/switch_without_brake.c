#include <stdio.h>

int main()
{
    int gear = 2;

    switch (gear)
    {
        case 1:
            printf("First Gear\n");

        case 2:
            printf("Second Gear\n");

        case 3:
            printf("Third Gear\n");

        default:
            printf("Invalid Gear\n");
    }

    return 0;
}