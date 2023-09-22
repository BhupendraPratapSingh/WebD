#include<stdio.h>
int greater(int , int , int);
void main()
{
    int a , b ,c ; 
    printf("enter the number a\n b\n c\n");
    scanf("%d%d%d" , &a,&b,&c);
    printf("the greatest number is %d" , greater(a, b,c));
    return;
}
int greater(int a,int b,int c)
{
    if(a>b && a>c)
    return a;
    if (b>a && b>c)
    return b;
    else 
    return c;
}

