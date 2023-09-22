#include<stdio.h>
int main()
{
    int sum =0 , num;
    printf("enter the number\n");
    scanf("%d" , &num);
    for(int i = 1 ; i<=num ; i++)
    {
      sum = sum + i*i;
      printf("%d" , sum);
    }
    return 0;
}