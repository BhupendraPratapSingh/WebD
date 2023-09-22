#include<stdio.h>
int main()
{
    int row, num, colmn;
    printf("enter the number num\n ");
    scanf("%d" , &num);
    for(row =1 ; row<=num ; row++)
    {
        for(colmn=5 ; colmn>=1; colmn--)
        {
            printf("%d" " ", colmn );
        }
        printf("\n");
    }
    return 0;
}