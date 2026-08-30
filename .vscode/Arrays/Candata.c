/*
unsigned char canData[8] ={
    0x10, 0x20, 0x30, 0x40,
    0x50, 0x60, 0x70, 0x80};
 
How many elements are there?
What is the first index?
What is the last index?
What is canData[3]?
How would you change canData[5] to 0xAA?
*/
#include<stdio.h>
int main()
{
    unsigned char canData[8] = {
    0x10, 0x20, 0x30, 0x40,
    0x50, 0x60, 0x70, 0x80};

    //How many elements are there?
    printf("How many elements : %zu\n", sizeof(canData));   // 8

    //What is the first index?
    printf("First index  no : %d\n", canData[0]);           // 16
    printf("First index position = 0\n");                   // 0

    //What is the last index?
    printf("Last index noi: %d\n", sizeof(canData)-1);      // 8
    printf("Last index position = %d\n", 8 - 1);            // 7

    //What is canData[3]?    
    printf("canData[3] : %d\n", canData[3]);                // 64
    printf("canData[3] = 0x%02X\n", canData[3]);           //0x40

    //How would you change canData[5] to 0xAA?
    canData[5] = 0xAA;
    printf("canData[5]: %X\n", canData[5]);      // AA
    printf("After changing canData[5]: 0x%02X\n", canData[5]);   //0xAA


}