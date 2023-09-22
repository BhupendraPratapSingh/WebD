#include<stdio.h>
int main()
{
    int num , sum=0;
    printf("Enter the number\n");
    scanf("%d" , &num);
    while(sum!=1 && sum!=4)
    {
        sum=0;
    while(num!=0)
    {
        int rem = rem%10;
        sum = sum+ (rem*rem) ;     
        num = num/10;    
    }
    num=sum;
    
         if(sum==1)
         printf("happy number");
         else
         printf("not a happy number");
        
}}