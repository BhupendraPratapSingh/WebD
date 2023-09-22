#include<stdio.h>
int rect(int l , int b);
int main()
{
    int l , b ;
    printf("enter the number\n");
    scanf("%d%d" , &l , &b);
    printf("%d" , rect(l,b));
    return 0;
}
int rect(int l , int b)
{
    int area;
    area = l*b; 
    return area;
}