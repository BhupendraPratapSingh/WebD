#include<stdio.h>
int main()
{
    int a ,b,n,x,y;
    printf("enter the value of a\n");
    scanf("%d" ,&a);
    printf("enter the value of b\n");
    scanf("%d" ,&b);
    printf("enter the value of x\n");
    scanf("%d" ,&x);
    printf("enter the value of n\n");
    scanf("%d" ,&n);
    if(n==1)
    y=a*x%b;
    if(y==2)
    y=a*2 + 2*b;
    if(n==3)
    y=a-b*x;
    if(n==4)
    y=a+x/b;
    printf("value of the y is %d:" , y);
    return 0;
}

