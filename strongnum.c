#include<stdio.h>
int main()
{
int num , temp ,fact=1, sum =0 ,remainder ;
printf("enter the number\n");
scanf("%d" , &num);
temp=num;
while(temp!=0)
{
    remainder = temp%10;
    temp = temp/10;
    fact =1;
     for(int i =1 ; i<=remainder ; i++)
     {
     fact = fact*i;
     }
    sum = sum+fact;
}
    if(sum ==num)
    printf("strong number");
    else
    printf("not strong number");
  return 0;
}