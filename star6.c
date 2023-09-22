#include<stdio.h>
int main()
{
    int row, num, colmn;
    printf("enter the number num\n ");
    scanf("%d" , &num);
    for(row =1 ; row<=num ; row++)
    {
        for(colmn=1 ; colmn<=6; colmn++)
        {
            printf("%c" " ", colmn+64 );
        }
        printf("\n");
    }
    return 0;
}