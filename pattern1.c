#include<stdio.h>
int main()
{
    int row , colmn , n;
    printf("enter the number") ;
    scanf("%d" , &n);
    for(row = 1 ; row<=n ; row++)
    {
        for(colmn = 1 ; colmn<=row ; colmn++)
        {
            printf("%d" , colmn );
        }
        printf("\n");
    }
    return 0;
}