#include<stdio.h>

int main()
{
    int speed = 80;
    //IF (speed>60) -> using IF instead of if results in a compilation error
    if (speed > 60)
    {
        printf("Car is overspeeding\n");
    }
    else
    {
        printf("Car speed is within the limit\n");
    }

    return 0;
}