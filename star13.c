#include<stdio.h>
int main()
{
    int row, num, colmn;
    printf("enter the number num\n ");
    scanf("%d" , &num);
    for(row =num ; row>=1 ; row--)
    {
        for(colmn=row ; colmn>=1; colmn--)
        {
            printf("%d" " ", colmn , colmn);
        }
        printf("\n");
    }
    return 0;
}