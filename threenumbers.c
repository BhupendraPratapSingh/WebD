#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number a b and c");
    scanf("%d%d%d" ,&a,&b,&c);  //largst number program using only if statement
    if(a>b && a>c)
    printf("a is the greatest number");
     if(b>a && b>c)
    printf("b is the greatest number");
    if(c>a && c>b)
    printf("c is the greatest number");
    return 0;
}