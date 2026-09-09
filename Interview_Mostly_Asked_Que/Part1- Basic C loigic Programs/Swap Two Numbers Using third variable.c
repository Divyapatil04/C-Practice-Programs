//Swap Two Numbers Using third variable
#include<stdio.h>
// Can you swap without a third variable?
//Using arithmetic:
void arithmatic(int x, int y)
{
    x = x + y;
    y = x - y;
    x = x - y;
}
void XOR(int x, int y)
{
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
}
int main()
{
    int a;
    int b;
    int c , d ;
    int p, q;
    int temp;

    printf("Enter two numbers a & b: ");
    scanf("%d %d", &a, &b);
     printf("Enter two numbers c & d: ");
    scanf("%d %d", &c, &d);
     printf("Enter two numbers q & b: ");
    scanf("%d %d", &p, &q);

    temp = a; 
    a = b;
    b = temp;

    arithmatic(c, d);
    XOR(p, q);

    printf("\nusing temp : a = %d  b = %d", a, b);
   
    printf("\nusing arithmatic: c = %d  d = %d", c, d);

    printf("\nusing XOR: p = %d  q = %d", p, q);
    return 0;
}