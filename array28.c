#include<stdio.h>
int main()
{

    int a[100] , b[100]  , i , n;
    printf("Enter the size of the Array\n"); //1-D Array
    scanf("%d", &n);
    printf(" Enter Array Elements\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d" , &a[i]);
    }
    for(i=0 ; i<n ; i++)
    {
        b[i]=a[i];
    }
    printf("The elements of the second array is\n");
    for(i=0 ; i<n ; i++)
    {
        printf("%d" ,b[i]);
    }
    return 0;
}

