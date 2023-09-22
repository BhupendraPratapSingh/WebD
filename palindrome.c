#include<stdio.h>
int main()
{
int num,temp,reverse=0,remainder;
printf("enter the number");
scanf("%d", &num);
temp=num;
while(num!=0)
{
    remainder=num%10;              //finding remainder of the number
    reverse=reverse*10+remainder; // finding reverse a number using this condition
    num /= 10;                    //finding quotient of the number
}
if(temp==reverse)
printf("number is palindrome");
else
printf("number is not palindrome");
return 0;
}