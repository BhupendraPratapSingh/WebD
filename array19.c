#include<stdio.h>
int main()
{
    int a[3][3] , i , sum   ,j;
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
    sum=0;
    printf("Sum of array elements are\n");
    for(i=0 ; i<3 ; i++)
    for(j=0 ; j<3 ; j++)
    {
        sum = sum+a[i][j];
    }
    printf("%d" , sum);
    return 0;
}
