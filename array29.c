#include<stdio.h>
int main()
{
    int a[10] , n , rem ,i , cnt ;
    printf("Enter Decimal number\n");
    scanf("%d" , &n);
    i=0;
    while(n!=0)
    {
        rem = n%2;
        a[i]=rem;
        i++;
        n=n/2;
    }
    printf("Required binary no is\n");
cnt =i-1;
for(i=cnt ; i>=0 ;i--)
printf("%d" , a[i]);
}
    