#include<stdio.h>
int main()
{
    int a[3][3] , b[3][3] , c[3][3];
    int i , j ,k;
    printf("Enter the value of first matrix \n");
    for(i=0 ; i<3  ; i++)
    for(j=0 ; j<3  ; j++)
    {
      scanf("%d" , &a[i][j]);                    // input part
    }
   printf("Enter the value of the second matrix\n");
    for(i=0 ; i<3 ; i++)
    for(j=0 ; j<3 ; j++)
    {
        scanf("%d" ,&b[i][j]);
    }
    printf("First matrix is\n");                // display part
    for(i=0 ; i<3 ; i++)
    {
        printf("\n");
        for(j=0 ; j<3 ; j++)
        printf("%d " , a[i][j]);
    }
    printf("Second matrix is\n");
    for(i=0  ; i<3 ; i++)
    {
        printf("\n");
     for(j=0 ; j<3 ; j++)
     printf("%d " , b[i][j]);
    }
for(i=0 ; i<3 ; i++)
    {
    for(j=0 ; j<3 ; j++)
    {
     c[i][j]=0;
     for(k=0 ; k<3 ; k++)
     {
       c[i][j] = c[i][j]+ a[i][j]*b[k][j];
     }
    }
    }
    printf("enter the multiplication of matrix\n");
    for(i=0 ; i<3 ; i++)
    {
        printf("\n");
        for(j=0 ; j<3 ; j++)
        printf("%d" , c[i][j]);
    }
    return 0;
}
