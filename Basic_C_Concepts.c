
 //Program Name : Basic C Concepts


#include <stdio.h>      // Header file , stdio.h is standard input output for printf() and scanf()

// Main function - Program execution starts here
int main()
{
    // ---------------- Variables & Data Types ----------------
    int age = 22;               // Integer variable
    char grade = 'A';           // Character variable
    float salary = 25000.50f;   // Float variable
    double pi = 3.141592;       // Double variable

    // ---------------- Identifier ----------------
    int marks = 90;             // age, grade, salary, pi, name, marks are identifiers

    // ---------------- Constants ----------------
    const int MAX = 100;

    // ---------------- Arithmetic Operators ----------------
    int a = 10, b = 5;
    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    int mod = a % b;

    // ---------------- Relational Operator ----------------
    printf("a > b = %d\n", a > b);

    // ---------------- Logical Operator ----------------
    printf("(a>b && b>0) = %d\n", (a > b && b > 0));

    // ---------------- Assignment Operator ----------------
    a += 5;

    // ---------------- Increment / Decrement ----------------
    a++;
    b--;

    // ---------------- Bitwise Operator ----------------
    printf("Bitwise AND = %d\n", a & b);

    // ---------------- Conditional Operator ----------------
    int max = (a > b) ? a : b;



    // ---------------- printf() ----------------
    
    printf("Age = %d\n", age);
    printf("Grade = %c\n", grade);
    printf("Salary = %.2f\n", salary);
    printf("PI = %.6lf\n", pi);
    printf("Marks = %d\n", marks);
    printf("MAX = %d\n", MAX);

    // ---------------- Escape Sequences ----------------
    printf("Hello\tWorld\n");     // Tab (\t)
    printf("New\nLine\n");        // Newline (\n)
    printf("Carriage\rABC\n");    // Carriage Return (\r)  //ABCriage  

    // ---------------- Whitespace ----------------
    // Spaces
  

    //  ---------------- Garbage Valu----------------
    int A; //uninitialized automatic local variable 
    printf("Garbage value = %d\n", A);// undefined behaviour error / getting garbage value 0 it depeds on compiler


    return 0;
}