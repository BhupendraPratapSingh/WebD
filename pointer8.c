#include<stdio.h>
int main()
{
    int  a =30;
    int*ptra = &a;
    printf("%d\n" , ptra);
    ptra++;
    printf("%d\n" , ptra);
    printf("%d" ,ptra+2);
    return 0;
} // Also here we can use %p and % x specifier, integer  hum log ne is liye use kiya tha kyuki usse samajna assan pd jata hai.