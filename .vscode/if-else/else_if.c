#include <stdio.h>

int main()
{
    int temperature = 95;

    if (temperature >= 0)
    {
        if (temperature > 110)
        {
            printf("Critical Temperature\n");
        }
        else if (temperature > 100)
        {
            printf("High Temperature\n");
        }
        else if (temperature > 90)
        {
            printf("Temperature Warning\n");
        }
        else
        {
            printf("Temperature Normal\n");
        }
    }
    else
    {
        printf("Invalid Temperature\n");
    }

    return 0;
}