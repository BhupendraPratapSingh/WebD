#include <stdio.h>
int main()
{
    int num, sum, rem;
    printf("enter the number\n");
    scanf("%d", &num);
    while (num > 9)
    {
        while (num!=0)
        {
            rem = num % 10;
            sum = sum + rem;
            num = num / 10;
        }

        num = sum;
        sum=0;
    }
    if (sum == 1)
        printf("number is magic no.");
    else
        printf("number is not magic no.");
}