#include<stdio.h>
int main()
{
    int a[3][3] , i , sum , pro ,j;
    printf("Enter the elements of 2D Array\n");
    for(i=0 ; i<3 ; i++)
    for(j=0 ; j<3 ; j++)
    {
        scanf("%d" , &a[i][j]);
    }
    printf("Array Elements are\n");
    for(i=0 ; i<3 ; i++)
    {
        printf("\n");
        for(j=0 ; j<3 ; j++)
        printf("%d " , a[i][j]);
    }
    sum=0 , pro=1;
    for(i=0 ; i<3 ; i++)
    for(j=0 ; j<3 ; j++)
    {
        if(a[i][j] % 2==0)   
        sum = sum+a[i][j];
        else
        pro = pro*a[i][j];
    }
    printf("sum is = %d  and product is = %d" , sum ,pro);
    return 0;
}