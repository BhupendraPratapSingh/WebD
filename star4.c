#include<stdio.h>
int main()
{
    int row , colmn ,n,space;
    printf("enter the number ");
    scanf("%d" ,  &n);
    for(row=1 ; row<=n ; row++)
    {
        for(space=1 ; space<=(n-row); space++)
        {
            printf(" ");
        }
    for(colmn = 1 ; colmn<=(2*row-1) ; colmn++)
    {
        printf("*");
    }
     printf("\n");

    }
}