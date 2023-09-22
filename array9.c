#include<stdio.h>
int main()
{
    int a[10]  ,i ,even=0 , odd=0;
    printf("Enter the elements of array\n");
    for(i=0 ; i<10 ; i++)
    {
        scanf("%d" ,&a[i]);
    }
    for(i=0 ; i<10 ; i++)
    {
        if(a[i]%2==0)
        even++;
        else
        odd++;   
    }
    printf("total even =%d and total odd =%d" , even , odd);
    return 0;
}