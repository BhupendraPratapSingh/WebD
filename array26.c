#include<stdio.h>
int main()
{
    int a[3][3]  , i , flag=0, j ;
    printf("Enter the elements of the matrix A\n");
    for(i=0 ; i<3 ; i++)
    for(j=0 ; j<3 ; j++)
    {
      scanf("%d" , &a[i][j]);
    }
    
    printf("Matrix A is");
    for(i=0 ; i<3 ; i++)
    {
        printf("\n");
        for(j=0 ; j<3 ; j++)
        printf("%d " , a[i][j]);
    }
    for(i=0 ; i<3 ; i++)
    for(j=0 ; j<3 ; j++)
    {
        if((i>j) && a[i][j]!=0)
        flag=1;
        break;
    }
    if(flag==1)
    printf("A is not an upper triangular matrix");
    else
    printf(" A is an upper triangular matrix");
    return 0;
}


    

    

