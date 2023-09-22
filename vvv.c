#include<stdio.h>
int main()
{
    int row , coloumn ;
    for(row=1 ; row<=5 ; row++)
    {
        for (coloumn=1 ; coloumn<=row ; coloumn++)
        printf("*");
    }
    printf("\n");
}