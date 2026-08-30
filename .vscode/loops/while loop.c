#include <stdio.h>

int main()
{
    int waterLevel = 1;

    while (waterLevel <= 5)
    {
        printf("Water level....%d\n", waterLevel);

        waterLevel++;
    }

    printf("Water tank is full\n");

    return 0;
}