#include<stdio.h>
int main()
{
    int  a =30;
    int*ptra = &a;
    printf("%p\n" , ptra);
    ptra++;
    printf("%p\n" , ptra);
    printf("%p" ,ptra+2);
    return 0;
} 