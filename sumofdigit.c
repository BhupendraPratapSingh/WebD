# include<stdio.h>
int main()
{
    int remainder , num , sum =0 ;
    printf("Enter the number\n");
    scanf("%d" , &num);
    while(num!=0)
    {
        remainder  = num%10;
        sum = sum+remainder;
        num = num/10;
    }
    printf("%d" , sum);
   return 0;
}
