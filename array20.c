#include<stdio.h>
int main()
{
    int a[3][3] , i ,j,key;
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
        for(j=0 ; j<3  ; j++)
        printf("%d  ", a[i][j]);
    }
   printf("Enter the element which is to be searched\n");
   scanf("%d" ,&key);
   for(i=0 ; i<3 ; i++)
   for(j=0 ; j<3 ; j++)
   {
    if (a[i][j]==key)
    {
        printf("Element found at  pos a[%d][%d]" , i ,j);
        return 0;
    }
   }
   printf("\n Number not found");
   return 0;

    
}