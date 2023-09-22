#include<stdio.h>
void swap(int *a , int*b)
{
    int temp;
    temp=*a;
    *a=*b ;
    *b = temp;
}
int main()
{
    int a;
    int b;
    printf("Enter the number to be swapped\n");
    scanf("%d" ,&a);
    scanf("%d" , &b);
    printf("before swapping a:%d b:%d\n" , a , b);
    swap(&a , &b);
    printf("after swappin a: %d b: %d" , a , b);
    return 0;
}