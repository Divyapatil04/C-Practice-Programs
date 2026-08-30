#include<stdio.h>

int main()
{
    int n=1, b=2;
    printf("%d\n",n++ * n++ * ++b * ++b);
    //unsigned int num = 0x3044;    //output->D
    //unsigned int num = 0x305A;    //Output->Z
    //unsigned int num = 0x3037;    //Output->7
    //unsigned int num = 0x4143;    //Output->C
    unsigned int num = 0x3132;      //Output->2
    char ch = num;
    //printf("%c", ch);
    printf("%c %d %x", ch, ch, ch);


    printf("\n");

    int a = 10, c=16;
    int res = a++ & ++a + --c* --a + ++c * c++ + a++ - a-- | a++;
    printf("%d", res);

    int aa=2;
    int bb= ++aa * ++aa * ++aa;
    printf("%d %d",aa, bb);
    return 0;
    
}