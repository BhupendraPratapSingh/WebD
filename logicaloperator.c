#include<stdio.h>
int main()
{
    int a=36;
    int b=5;
    printf("a+b =%d\n" ,a&&b);
    printf("a-b =%d\n" ,a||b); 
    printf("a*b =%d\n" ,!(a||b));
    printf("a/b =%d\n" ,!(a&&b));
}    