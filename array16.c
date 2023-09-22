#include<stdio.h>
int main()
{
    int a[10] , i  , min;
    printf("Enter the elements of the array\n");
    for(i=0 ; i<10 ; i++)
    {
        scanf("%d" , &a[i]);
    }
    min=a[0];
    for(i=0 ; i<10 ; i++)
    {
     if(a[i]<min)
     min = a[i];
    }
    printf("minimum number is =%d" , min);
     
    }
