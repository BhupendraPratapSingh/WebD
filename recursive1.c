#include <stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)  //As factorial of both 0 and 1 is 1. 
    {
        return 1;
    }
    else
    {
        return(number*factorial(number-1));
    }
}
int main()
{
    int num;
    printf("Enter the number of factorial of \n");
    scanf("%d" , &num);
    printf("the factorial of %d is %d\n" , num , factorial(num));
    return 0;
}