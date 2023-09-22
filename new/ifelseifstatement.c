#include<stdio.h>
int main()
{
    int marks ;
    printf("enter the marks to be printed");
    scanf("%d" , &marks);
    if(marks>90)
    {
    printf("the student is pass and the student is good"); //elseif statement tabhi use  hoge jab if statement execute nhi hoga means false hoga.
    }
    else if(marks>50)
    {
      printf("the student is pass and the student is   average");
    }
    else if(marks<40)  //jab upar wala if else execute nhi hoga then ye wala else if condition check hogi and desired output print ho jayega.
    printf("student is fail");
}
    
    