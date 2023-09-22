#include<stdio.h>
int main()
{  int temp ,  num1 , num2 ;
printf("enter the number 1\n" );
scanf("%d" , &num1);
printf("Enter the number 2\n" );
scanf("%d" , &num2);
temp = num1;
num1= num2;
num2 = temp;
printf("a =%d\n" , num1);
printf("b =%d\n" , num2);
}

