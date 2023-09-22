#include<stdio.h>
int main()
{
    int a[100] ,  b[100] , i , n;
    printf("Enter the size of the array\n" );
    scanf("%d" , &n);
    printf("Enter array elements\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d" , &a[i] );
    }
    printf("First array elements are\n :");
    for(i=0 ; i<n ; i++)
    {
        printf("%d " , a[i]);
    }
    printf("\n");
    printf("copy array 1 elements in array 2\n");
    for(i=0 ; i<n ; i++)
    {
        b[i]=a[i];
    }
    printf("Second array elements are\n");
    for(i=0  ; i<n  ; i++)
    {
        printf("%d " , b[i]);
    }

}