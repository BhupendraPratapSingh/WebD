#include<stdio.h>
int main()
{
    printf("Lets Learn about pointers\n");
    int a=76;
    int*ptra = &a;   
    printf("The value of a is %d\n" , a);
    printf("The value of a is %d\n" , *ptra);
    return 0;
}
//toh main 'a' likhu chahe '*ptra' likhu then in dono case mein 76 hi print hoga