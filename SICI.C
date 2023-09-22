#include<stdio.h>
#include<math.h>
int main()
{
    float si , ci , p,r ,t ;
    printf("enter the value of p\n , r\n , t\n");
    scanf("%f%f%f" , &p ,&t , &r);
    si = (p*r*t)/100.0;
    ci = p* (pow(1+r/100,t)-1);
    printf("%f\n" , si);
    printf("%f\n" , ci);
    return 0;


}