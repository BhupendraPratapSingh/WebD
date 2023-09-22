#include<stdio.h>
int main()
{
    int row, num, colmn;
    printf("enter the number num\n ");
    scanf("%d" , &num);
    for(row =1 ; row<=num ; row++)
    {
        for(colmn=1 ; colmn<=5; colmn++)
        {
            printf("%d " , row ); // some space
        }
        printf("\n");
    }
    return 0;
}