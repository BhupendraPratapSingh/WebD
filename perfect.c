#include<stdio.h>
int main()
{
    int num , sum=0 ,i;
    printf("enter the number\n");
    scanf("%d" , &num);
    for(i=1 ; i<num ; i++)
    {
        if(num%i==0)
        sum = sum+i;
    }
    if(sum==num)
    printf("number is perfect");
    else
    printf("number is not perfect");
}