#include<stdio.h>
int main()
{
    int num1 , num2 , num3;
    printf("Enter number num1/n num2/n num3/n");
    scanf("%d%d%d" , &num1, &num2 ,&num3);
    switch(num1>num2 && num1>num3)
    {
    case 1 :
    printf("num1 is greatest among three");
    
    }
    switch(num2>num1 && num2>num3)
    {
    case 2 :
    printf("num2 is greatest among three");
    }
    switch(num3>num1 && num3>num2)
    {
        case 3 :
        printf("num3 is greatest among three");
    }
    
    return 0;
}