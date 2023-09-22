#include<stdio.h>
int main()
{
    int row , colmn ,  n ;
    printf("enter the number\n ");
    scanf("%d" , &n);
    for(row = 1 ; row <=n ; row++)
    {
        for(colmn = 1 ; colmn<=n+1-row ; colmn++)
        {
            printf("*  " "");
        }
          printf("\n");
    }
    return 0;
}