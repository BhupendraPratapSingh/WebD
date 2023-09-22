#include<stdio.h>
int greater(int ,int );
void main(void)
{
int a , b  ;  
printf("enter the number a and b");
scanf("%d%d" , &a , &b);
printf("the greatest number is %d"  , greater(a ,b));
return ;
}
int greater(int a , int b)
{
    if (a>b)
    return a;
    else
    return b;
}