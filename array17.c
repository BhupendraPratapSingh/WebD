#include<stdio.h>
int main()
{
    int a[3][3],i,j; //i ke ek value ke liye j ka loop 3 baar chlta hai
    printf("Enter the value for 2D Array\n");
    for(i=0 ; i<3 ; i++)
    for(j=0 ; j<3 ; j++)
    {
        scanf("%d" , &a[i][j]);
    }
    printf("Array Elements are\n");
    for(i=0 ; i<3 ; i++)
    {
        printf("\n"); // to print next row in new line
        for(j=0 ; j<3 ; j++)
        printf("%d ", a[i][j]);
    }
    return 0;
}
