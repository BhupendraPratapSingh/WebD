#include<stdio.h>
int main()
{
    int i , j , num ,k=1;
    printf("enter the number\n");
    scanf("%d" , &num);
    for(i=0 ; i<=num ; i++)
    {
        for(j=0 ; j<=i ; j++)
        {
            printf("%d " , k++);
        }
        printf("\n");
    
}}