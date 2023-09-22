#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d" , &num);
    switch( num%2)  //if it return 0 then case 0 will be executed and if it returns 1 then case 1 will be executed
    {
        case 0:
        printf("number is even\n");
        break;
        case 1 :
        printf("number is odd\n");
        break;
        default:
        printf("inavalid");
    
    }
    return 0;
}
