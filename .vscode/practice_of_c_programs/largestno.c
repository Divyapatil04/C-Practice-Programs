#include<stdio.h>

//------- 1. Largest no Program using if else -------//

int main()
{
    int a=10, b=30;
    if(a>b)
    {
        printf("a is greater %d",a);
    }
    else
    {
        printf("b is greater %d", b);
    }
    printf("\n");
  
    //---------2. Largest no using else if ---------//
    int x=10, y=550, z=99;
    if(x>=y && x>=z)
    {
        printf("x is greater %d",x);
    }
    else if(y>=x && y>=z)
    {
        printf("y is greater %d", y);
    }
    else
    {
        printf("z is greater %d",z);
    }

       printf("\n");

    //---------3. Largest no without logical operators ---------//
    //int x=10, y=550, z=99;
    int max;

    max=x;
    if(y>max)
       max=y;
    if(z>max)
       max=z; 

       printf("max value is %d\n", max);

    //---------4. Largest element in an array ---------//
    int arr[]={10,20,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int lar = arr[0];

        for(int i=0; i<n; i++)
        {
            if(arr[i]>lar)
            {
                lar=arr[i];
            }
        }
        printf("Largest array element %d\n", lar);

    //---------5. Largest element using conditional ternary operator ---------// 
  
    int p = 50, q = 75;

    int maxx = (p > q) ? p : q;

    printf("Largest = %d\n", maxx);


    //---------6. Largest of Three Numbers Using Nested Ternary Operator ---------// 
    int s = 12, t = 35, u = 28;

    int maximun = (s > t) ? ((s > u) ? s : u)
                      : ((t > u) ? t : u);

    printf("Largest = %d", maximun);
    return 0;
}


