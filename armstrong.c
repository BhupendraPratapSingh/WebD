#include<stdio.h>
int main()
{
  int num ,  sum =0, remainder ,temp;
  printf("Enter the number to be checked\n");
  scanf("%d" , &num);
  temp=num;
  while(num!=0)
  {
 remainder  = num % 10;
 num =  num/10;
 sum  = sum + (remainder * remainder * remainder);  
  }
   if(sum == temp)
   printf(" number is  armstrong");
   return 0;

      
      

} 