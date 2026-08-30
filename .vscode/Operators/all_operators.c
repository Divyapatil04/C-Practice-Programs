#include<stdio.h>
struct Student
{
    int age;
};
int main()
{
    //Artithmatic operators (+, -, *, /, %)
    int speed1 = 10, speed2 = 3;
    printf("----Arithmatic opetators----\n");
    printf(" Addition:       %d \n",speed1 + speed2);
    printf(" Substraction:   %d \n",speed1 - speed2);
    printf(" Multiplication: %d \n",speed1 * speed2);
    printf(" Division:       %d \n",speed1 / speed2);
    printf(" Modulus:        %d \n",speed1 % speed2);

    printf("\n");

    //Relational operators  (==, !=, >, <, >=, <=)
    int a = 10, b = 5;
    printf("----Relational operators----\n");
    printf(" a > b :  %d\n", a > b);
    printf(" a < b :  %d\n", a < b);
    printf(" a >= b : %d\n", a >= b);
    printf(" a <= b : %d\n", a <= b);
    printf(" a == b : %d\n", a == b);
    printf(" a != b : %d\n", a != b);

    printf("\n");

    //Assignment Operators (=, +=, -=, *=, /=, =%, !=)
    printf("----Assignment operators----\n");
    //int a = 10;
    printf(" a      : %d\n", a);
    a += 5;
    printf(" a += 5 : %d\n", a);
    a -= 3;
    printf(" a -= 3 : %d\n", a);
    a *= 2;
    printf(" a *= 2 : %d\n", a);
    a /= 4;
    printf(" a /= 4 : %d\n", a);
    a %= 3;
    printf(" a %= 3 : %d\n", a);

    printf("\n");

    // Logical Operators ( && , || , ! )
    printf("----Logical operators----\n");
    //int a = 10, b = 5;
    printf(" a > 5 && b < 10 : %d\n", (a > 5 && b < 10));
    printf(" a > 5 || b > 10 : %d\n", (a > 5 || b > 10));
    printf(" !(a > 5)        : %d\n", !(a > 5));
    
    printf("\n");

    //Increment and Decrement (++ --)
    printf("----Increment and Decrement operators----\n");
    //int a = 10;
    printf(" a         : %d\n", a);
    a++;
    printf(" After a++ : %d\n", a);
    ++a;
    printf(" After ++a : %d\n", a);
    a--;
    printf(" After a-- : %d\n", a);
    --a;
    printf(" After --a : %d\n", a);

    printf("\n");

    // Bitwise Operators ( &, |, ^, ~, <<, >>)
    printf("----Bitwise operators----\n");
    //int a = 10, b = 5;
    printf(" a & b  : %d\n", a & b);
    printf(" a | b  : %d\n", a | b);
    printf(" a ^ b  : %d\n", a ^ b);
    printf(" ~a     : %d\n", ~a);
    printf(" a << 1 : %d\n", a << 1);
    printf(" a >> 1 : %d\n", a >> 1);

    printf("\n");
    
    //Conditional / Ternary Operator  ( ?: )
    printf("----Conditional / Ternary Operator----\n");
    //int a = 10, b = 5;
    int max;
    max = (a > b) ? a : b;
    printf(" Maximum : %d\n", max);

    printf("\n");

    //sizeof Operator
    printf("----sizeof Operator----\n");
    int divya;
    char ambika;
    float sakshi;
    double rohini;
    printf(" int    : %zu bytes\n", sizeof(divya));
    printf(" char   : %zu bytes\n", sizeof(ambika));
    printf(" float  : %zu bytes\n", sizeof(sakshi));
    printf(" double : %zu bytes\n", sizeof(rohini));
     
    printf("\n");

    //Comma Operator ,
     printf("----Comma Operator----\n");
    int x, y, z;
    z = (x = 10, y = 20, x + y);
    printf(" x : %d\n", x);
    printf(" y : %d\n", y);
    printf(" z : %d\n", z);

    printf("\n");

    //Address-of & and Dereference *
    printf("----Address-of & and Dereference *----\n");
    int car = 1500000;
    int *pp;
    pp = &car;
    printf(" Value of car    : %d\n", car);
    printf(" Address of car  : %p\n", (void *)&car);
    printf(" Value of pp     : %p\n", (void *)pp);
    printf(" Value using *pp : %d\n", *pp);

    printf("\n");

    //Type Cast Operator
     printf("----Type Cast Operator----\n");
    int A = 10,  B = 3;
    float result;
    result = (float)A / B;
    printf(" Result : %f\n", result);

    printf("\n");

    //Structure Member Operators . and ->
     printf("----Structure Member Operators . and ->----\n");
    //. operator
    struct Student s;
    s.age = 29;
    printf("Age : %d\n", s.age);
    //-> operator
    //struct Student s;
    struct Student *pointer= &s;
    pointer->age = 24;
    printf("Age : %d\n", pointer->age);

    return 0;

}