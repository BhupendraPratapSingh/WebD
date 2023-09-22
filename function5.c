#include<stdio.h>
int addition(int a ,int b)   //function declaration
{               
    int sum;
    sum = a+b; 
    return sum;
}
int main()                //main function
{
    int x ,y;
    printf("enter the number x\n");  //function defination
    scanf("%d" , &x);
    printf("enter the number y\n");
    scanf("%d" , &y);
    int add  = x+y;
    printf("%d" , add);
    return 0;
}
