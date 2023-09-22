#include<stdio.h>
void display(int arr[] , int n)
{
    for(int i=0 ; i<n ; i++)          //Code for Traversal.
    {
        printf("%d  " , arr[i]);
    }
    printf("\n");
}
int indInsertion(int arr[] , int size , int element , int capacity ,  int index)
{
    if(size>=capacity)     //code for Insertion.
    {
        return -1;
    }
    for(int i = size-1 ; i>=index ; i--)
    {
     arr[i+1] = arr[i]; 
    }
    arr[index]=element;
    return 1;

}
int main()
{
int arr[100] = {7 , 8, 12 , 27 ,88};//Execution starts from main(). 
int size = 5;
 int index = 3;
 int capacity = 100;
int element = 45;
 indInsertion(arr , size , element ,capacity, index );
 size += 1;
 display(arr , size);

return 0;
}