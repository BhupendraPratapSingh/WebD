#include<stdio.h>
int main()
{
    int remainder ,reverse =0 , num;
    printf("Enter the number which is to printed in the reverse vertical  form\n ");
    scanf("%d" , &num);
    while(num!=0)
    {
    remainder =num%10;
    reverse =reverse*10+remainder;
    num =num/10;
    }
    while(reverse!=0)
    {
        remainder =reverse%10;
        reverse =reverse/10;
        printf(" remainder is %d\n" , remainder);
    }
    return 0;
}
