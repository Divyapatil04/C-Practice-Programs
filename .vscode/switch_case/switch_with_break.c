#include <stdio.h>

int main()
{
    int mode = 2;

    switch (mode)
    {
        case 1:
            printf("Eco Mode\n");
            break;

        case 2:
            printf("Normal Mode\n");
            break;

        case 3:
            printf("Sport Mode\n");
            break;

        default:
            printf("Invalid Mode\n");
            break;
    }

    return 0;
}