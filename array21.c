//Print diagnol elements in 2D Array
#include<stdio.h>
int main()
{
    int i , j , a[3][3];
    printf("Enter the elements of the array\n");
    for(i=0 ; i<3 ; i++)
    for(j=0 ; j<3 ; j++)
    { 
     scanf("%d" , &a[i][j]);
    }
    printf("Array elements are\n");
    for(i=0 ; i<3 ; i++)
    {
        printf("\n");
        for(j=0 ;j<3 ; j++ )
        printf("%d " , a[i][j]);
    }
    printf("The Left diagnol elements are\n");
    for(i=0 ; i<3 ; i++)
    for(j=0 ; j<3 ; j++)
    {
        if(i==j)
        printf("%d\n", a[i][j]);
    }
    printf("The Right diagnol Elements are\n");
    for(i=0 ; i<3 ; i++)
    for(j=0 ; j<3 ; j++)
    {
        if(i+j ==2 )
        printf("%d\n" , a[i][j]);
    }
    return 0;
}

