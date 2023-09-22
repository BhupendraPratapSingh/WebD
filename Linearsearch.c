//It is done using array traversal if element is found then traversal will be stop.
// used for both sorted and umsorted array.
#include<stdio.h>
int linearsearch(int arr[] , int size , int element)
{
    for(int i =0 ; i<size ; i++)
    {
        if(arr[i]==element)
        return i;
    }
    return -1;
}
int main()
{
    int arr[] ={1,3,5,56,4,3,5,4,34,78,43};
    int size=sizeof(arr)/sizeof(int);
    int element =4;
    int searchIndex=linearsearch(arr , size ,4);
    printf("The elemnt  %d was found at index %d\n" ,element , searchIndex);
    return 0;
}