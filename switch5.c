#include<stdio.h>
 int main()
 {
char ch;
int a , b , division , product , sum , remainder , substraction  ;
printf("Enter your choice\n");
scanf("%d" , &ch);
printf("enter two integers a\n  b\n");
scanf("%d%d" , &a , &b);
switch( ch)
{
case 1 :
sum = a+b;
printf(" sum is  = %d " , sum);
break;
case 2 :  product = a*b;
printf("product is = %d " , product);
 break;
case 3 :  division = a/b;
printf("  division is = %d" ,  division);
break;
case 4 :  remainder = a%b;
    printf("modulus is = %d" , remainder );
    break;
case 5 :  substraction = a-b;
    printf("substraction is = %d" , substraction);
    break;
  default:
  printf("invalid operation");
}
return 0;
}