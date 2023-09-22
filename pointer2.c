#include<stdio.h>
int main()
{
    printf("Lets Learn about pointers\n");
    int a=76;
    int *ptra = &a;
    printf("The value of a is %d\n" , a);
    printf("The value of a is %x\n" , ptra);
    return 0;
}
 // %x is used to print the address in hexadecimal.
// note: %x is used to print address