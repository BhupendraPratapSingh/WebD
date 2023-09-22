#include<stdio.h>
void display( int a[] , int n  )
{
    for(int i=0 ; i<n ; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}
void deletion(int a[] , int size , int index)
{
    for(int i = index ; i<size-1; i++)
{
    a[i]=a[i+1];
}
}
int main()
{
    int a[100] ={7,8,12,27,88};
    int size =5 ; 
    int index = 1;
     deletion(  a, size ,  index );
    size=-1;
     display(a , size);
    return 0;
}
