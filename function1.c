#include<stdio.h>
void sum()                      //function declaration
{
    int a ,b, sum=0;
    printf("enter two number\n");   
    scanf("%d%d" , &a ,&b);        //function defination
    sum = a+b;  
    printf("%d\n" , sum);
}
void main()                 //main function 
{
    sum();
    sum();          //calling of function
    sum();
    printf("hello\n");     //printf is also a type of function
}                         
   //In main function we can write some other code also and that code would be definately executed