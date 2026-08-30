#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool ignitionIsOn = true;

    do
    {
        printf("Checking ignition status...\n");

        if (ignitionIsOn)
        {
            printf("Ignition is ON\n");

            // ECU reads ignition status
            ignitionIsOn = false;
        }
        else
        {
            printf("Ignition is OFF\n");
        }

    } while (ignitionIsOn);

    printf("Ignition monitoring completed\n");

    return 0;
}