#include<stdio.h>
int fact(int n);
int main()
{
    int n ;
    printf("enter the number\n");
    scanf("%d" , &n);
    printf("%d" , fact(n));
    return 0;
}
int fact(int n)
{
    int product = 1;
    for(int i=1 ; i<=n ; i++)
     product = product*i;
    return product ;
}
