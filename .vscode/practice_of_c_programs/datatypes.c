#include<stdio.h>


// Structure
struct Student
{
    int id;
    char grade;
};

// Union
union Data
{
    int i;
    float f;
    char c;
};

// Enum
enum Day
{
    MON,
    TUE,
    WED
};


// Global Variable
int marks = 80;

// Function to update global variable
void updateValue()
{
    marks = marks + 5;   // Add 5
    printf("After Adding 5 = %d\n", marks);

    marks = marks - 3;   // Subtract 3
    printf("After Subtracting 3 = %d\n", marks);
}

int main()
{
    //local variables
    int age = 24;
    char grade = 'A';
    float salary = 25000.50;
    double pi = 3.14159265;
    float no = 10.0000;

    //print data types
    printf("\t---Data Types---\n");
    printf(" age = %d\n", age);
    printf(" grade = %c\n", grade);
    printf(" salary = %.2f\n", salary);
    printf(" pi = %lf\n", pi); 
    printf(" no = %g\n", no);   //%g use to remove zeros of decimal

    
    printf("\t ---Global Variables---\n");
  
    // Access Global Variable
    printf("Marks (Before Update) = %d\n", marks);

    // Update Global Variable
    marks = 90;

    // Print Updated Global Variable
    printf("Marks (After Update) = %d\n", marks);   //90

    updateValue();   // Function call

    printf("Final marks = %d\n", marks);    // add 5 in 90 = 95-3=92

    // Structure
    struct Student s;

    // Union
    union Data u;

    // Enum
    enum Day day = MON;

    printf("\t ---sizeof Operator---\n");

    printf("int = %d bytes\n", sizeof(age));
    printf("float = %zu bytes\n", sizeof(salary));
    printf("double = %zu bytes\n", sizeof(pi));
    printf("char = %zu bytes\n", sizeof(grade));
    printf("struct = %zu bytes\n", sizeof(s));
    printf("union = %zu bytes\n", sizeof(u));
    printf("enum = %zu bytes\n", sizeof(day));
  


   printf("\t ---sizeof struct---\n");
 
struct Data {
    char a;     // 1 byte
    int b;      // 4 bytes
    char c;     // 1 byte
};
 
    struct Data var;
   
    // Check size using the structure type name
    printf("Size of struct: %zu bytes\n", sizeof(struct Data));
   
    // Check size using the variable name
    printf("Size of variable: %zu bytes\n", sizeof(var));
   
    return 0;


}