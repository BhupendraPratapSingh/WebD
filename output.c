#include<stdio.h>
int main()
{
    int a = 5 , b=5 , c;
    c = a++>b && ++b<10||b++;
    printf("%d\n%d\n%d\n",a,c, b);
}