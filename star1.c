#include<stdio.h>
int main()
{
    int  row , columnn , n ;
    printf("enter the number\n");
    scanf("%d" , &n);
    for(row = 1 ; row <=n ; row++)
    {
        for(columnn=1 ; columnn<=row ; columnn++)
        {
          printf("* ");
            }
            printf("\n");
        }
        return 0;
    }

