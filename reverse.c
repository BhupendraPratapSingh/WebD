#include<stdio.h>
int main()
{
    int remainder ,reverse =0 , num;
    printf("Enter the number which is to printed in the reverse  form\n ");
    scanf("%d" , &num);
    while(num!=0)
    {
    remainder =num%10;
    reverse =reverse*10+remainder;
    num =num/10;
    }
    printf(" reverse of %d" , reverse);
    return 0;
}