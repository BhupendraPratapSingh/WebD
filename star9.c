#include<stdio.h>
int main()
{
    int row, num, colmn;
    printf("enter the number num\n ");
    scanf("%d" , &num);
    for(row =num ; row>=1 ; row--)
    {
        for(colmn=1 ; colmn<=row; colmn++)
        {
            printf("%d" " ", row );
        }
        printf("\n");
    }
    return 0;
}