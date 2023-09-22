#include<stdio.h>
int isBuzz(int num)
{
    if(num % 7==0 ||num % 10==7)
    return 1;
    else
    return 0;
}
int main()
{
    int num;
  printf("enter the number\n");
  scanf("%d", &num);
  printf("%d" , isBuzz(num));
}