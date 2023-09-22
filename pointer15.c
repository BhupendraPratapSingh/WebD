#include<stdio.h>
int add(int*a , int*b ,int*sum) //same variable bhi le skte hai 
{
    *sum = *a+*b;
}
int sub(int*a , int*b , int*difference)
{
    *difference = *a-*b;

}
int main()
{
int a=34 , b=8;
int sum , difference;
printf("%d\n and %d\n" , a, b) ;
add(&a , &b , & sum);
sub(&a , &b , &difference);
printf("%d\n , %d\n" , sum , difference);
    
}