//program to merge two arrays
#include<stdio.h>
int main()
{
    int a[10] , b[10] , c[10] , d[30] ;
    int n1 , n2 , n3;
    int i , index=0;
    printf("Enter the size of first array\n"); //Size
    scanf("%d" , &n1);
    printf("Enter array elements\n");  // Taking Elements from the user
    for(i=0 ; i<n1 ; i++)
    {
        scanf("%d" , &a[i]);
    }
    printf("The array elements are\n"); //Display
    for(i=0 ; i<n1 ; i++)
    {
        printf("%d " , a[i]);
    }
    printf("\n");
    printf("Enter the size of second array\n");
    scanf("%d" , &n2);
    printf("Enter the elements\n");
    for(i=0 ; i<n2 ; i++)
    {
        scanf("%d" , &b[i]);
    }
    printf("The array Elements are\n");
    for(i=0 ; i<n2 ; i++)
    {
        printf("%d " , b[i]);
    }
    printf("\n");
    printf("Enter the size of the third array\n");
    scanf("%d" , &n3);
    printf("Enter array elements\n");
    for(i=0 ; i<n3 ; i++)
    {
        scanf("%d" , &c[i]);
    }
    printf("The array elements are\n");
    for(i=0 ; i<n3  ; i++)
    {
        printf("%d " , c[i]);
    }
    for(i=0 ; i<n1 ; i++)
    {
        d[index]=a[i];
        index++;
    }
    for(i=0 ; i<n2 ; i++)
    {
        d[index]=b[i];
        index++;
    }
    for(i=0 ; i<n3 ; i++)
    {
        d[index]=c[i];
        index++;
    }
    printf("\n");
    printf("The  merged arrays is\n");
    for(i=0 ; i<(n1+n2+n3) ; i++)
    {
        printf("%d " , d[i]);
    }
   
    return 0;
}