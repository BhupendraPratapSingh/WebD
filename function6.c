#include<stdio.h>
int Add_odd(int n)
{
    int r,sum=0;
    while(n!=0)
    {
        r=n%10;
        if(r%2!=0)
         sum=sum+r;
        n=n/10;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Sum of all the odd digits is: %d",Add_odd(n));
    return 0;
}
