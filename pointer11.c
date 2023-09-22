#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    printf("element at position 3 is %d\n" ,arr[3]);
    printf("The address of the first element of the array is%d\n" , &arr[0]);
    printf("The address of the first element of the array is%d\n" , arr);//Here arr is a pointer
    printf("The address of the second element of the array is%d\n" , &arr[1]);
    printf("The address of the first element of the array is%d\n" , arr+1);
//Here arr+1 is a pointer.
}
//&arr[0] print kre chahe arr print kre baat ek hi hai..+
