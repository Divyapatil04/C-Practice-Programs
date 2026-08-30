#include <stdio.h>
#include <stdbool.h>

int main()
{
    int speed = 80;
    bool isOverspeeding;

    if (speed > 60)
    {
        isOverspeeding = true;
    }
    else
    {
        isOverspeeding = false;
    }

    if (isOverspeeding)
    {
        printf("Car is overspeeding\n");
    }
    else
    {
        printf("Car speed is within the limit\n");
    }


// Car Door Status
    bool doorOpen = true;

    if (doorOpen)
    {
        printf("Door is open\n");
    }
    else
    {
        printf("Door is closed\n");
    }
// Engine status
    bool engineRunning = false;

    if (engineRunning)
    {
        printf("Engine is running\n");
    }
    else
    {
        printf("Engine is OFF\n");
    }


    return 0;
}