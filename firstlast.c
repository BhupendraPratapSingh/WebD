#include<math.h> 
#include<stdio.h>
int main()
{
    int num , remainder , quotient,   digit , sum=0;
    printf("Enter the number\n");
    scanf("%d" , &num);
    digit = log10(num);
    remainder = num%10;                         //remainder is our last digit
    quotient = (num/pow(10 , digit)); 
    sum = quotient +remainder;
    printf("%d" , sum );
    return 0;
}
                                              //quotient is our first digit 



