#include<stdio.h>
void printnum();
void main(void)
{
    int num;
    printf("Enter the number\n");
    scanf("%d" , num);
    printnum(num);
    return ;
}
void printeven(int a)
{
    int i ;
    for(i=1 ; i<=a; i++)
    if(i%2==0)
    printf("%d" , i);
    return;
 }

