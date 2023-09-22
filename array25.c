#include<stdio.h>
int main()
{
    int a[3][3] , b[3][3] ,  flag=0 , i , j ;
    printf("Enter the elements of matrix A\n ");
    for(i=0 ; i<3 ; i++)
    for(j=0 ; j<3 ; j++)
    {
        scanf("%d" , &a[i][j]);
    }
    printf("Enter the elements of the matrix B\n");
    for(i=0 ; i<3 ; i++)
    for(j=0 ; j<3 ; j++)
    {
        scanf("%d" , &b[i][j]);
    }
    printf("The Matrix A is");
    for(i=0 ; i<3 ; i++)
    {
        printf("\n");
        for(j=0 ; j<3 ; j++)
        printf("%d " , a[i][j]);
    }
    printf("Matrix B is");
    for(i=0 ; i<3 ; i++)
    {
        printf("\n");
        for(j=0 ; j<3 ; j++)
        printf("%d " , b[i][j]);
    }
    for(i=0 ; i<3 ; i++)
    for(j=0 ; j<3 ; j++)
    {
        if(a[i][j] !=b[i][j])
        flag =1;
    }
        if(flag==0)
        printf("The Matrix are equal\n");
        else
        printf("Matrix is  not equal\n");
        return 0;
    }
