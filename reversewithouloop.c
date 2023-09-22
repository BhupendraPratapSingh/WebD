#include<stdio.h>
int main()
{
    int reverse , num , a  , b, c,d ,e;
    printf("Enter the number\n");
    scanf("%d" , &num);
    int r1 = num%10;
    int q = num/10;
    a = r1;
    int r2 = q %10;
    b= a*10 + r2;
    int z = q/10;
    int r3 = z %10;
    c = b*10+r3;
    int x = z/10;
    int r4 = x%10;
    d = c *10+r4;
    int y = x/10;
    int r5 = y %10;
    e = d*10+r5;
    printf("%d" , e);
}


    
       



    






