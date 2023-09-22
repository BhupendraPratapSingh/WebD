#include<stdio.h>
int main()
{
    int  a =30;
    int*ptra = &a;
    printf("%x\n" , ptra);
    ptra++;
    printf("%x\n" , ptra);
    printf("%x" ,ptra+2);
    return 0;
} 