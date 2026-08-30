/*
Program 4: Calculate Square and Cube
Requirement:
Write separate functions:
square()
cube()
Pass an integer to each function using call by value and return the calculated result.
Input:
5
Output:
Square = 25
Cube = 125
*/

#include<stdio.h>
int Square(int n)
{
    return n * n;
}
int Cube(int n)
{
    return n * n * n;
}

int main()
{
    int number;
    int result_square, result_cube;

    printf("Enter a number: ");
    scanf("%d", &number);

    result_square = Square(number);
    result_cube = Cube(number);

    printf("Square = %d\n", result_square);
    printf("Cube = %d\n", result_cube);

    return 0;
}