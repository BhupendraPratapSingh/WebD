#include<stdio.h>
int main()
{
    int row , couloum,num;
    printf("enter the number\n");
    scanf("%d" , &num);
    for(row=1 ; row<=num ; row++)
    {
     for(couloum=1 ; couloum<=6 ; couloum++)
     {
         printf("*  " ""); // space 
     }
     printf("\n");
     }
    return 0;
    }