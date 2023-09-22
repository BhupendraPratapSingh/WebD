//given two numbers a and b , add them then subtract them and assign them to a and b using call by reference.
#include<stdio.h>
int add(int*x , int*y , int *sum )// a, b and sum ka address hum pointer ki help se hum x , y,sum mein copy kr dege
{
*sum = *x + *y; //then dereferncing krke usme a , b value dalege
}
void subtract(int *x , int *y , int*difference)
{
    *difference = *x - *y;
}
int main()
{
    int a= 32;
    int b= 40;
    int sum , difference;
    printf("%d and %d\n" , a , b);
    add(&a, &b , &sum);
    subtract(&a , &b , &difference);
    printf("%d\n",sum);
    printf("%d\n", difference);
    return 0;
}