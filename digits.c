#include<stdio.h>
int main()
{
    int num , c=0 ;
    printf("Enter the number\n");
    scanf("%d" , &num);
    while(num>0)
    {
        num  = num/10;
        c++;
    }
      printf("%d" , c);
      return 0 ;



    }
