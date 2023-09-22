#include<math.h> 
#include<stdio.h>
int main()
{
    int num , remainder , quotient,   digit , c =0 ,sum=0;
    printf("Enter the number\n");
    scanf("%d" , &num);
    if(num/10)
    {
    c++;
    }
    while(num>0)
    {
      remainder = num%10;
      quotient = (num/pow(10 , c));
      sum  = remainder + quotient;
    }
    printf("%d" , sum);
}

        

        



