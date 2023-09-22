#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    printf("element at position 3 is %d\n" ,arr[3]);
    printf("The value of the first element of the array is%d\n" , arr[0]);
    printf("The value of the first element of the array is%d\n" , *arr);
    printf("The value of the second element of the array is%d\n" , arr[1]);
    printf("The value of the second element of the array is%d\n" , *(arr+1));
    printf("The value of the second element of the array is%d\n" , *(&arr[1]));//dereferencing
    
}
//arr[i] likho chahe *(arr+i) likho baat ek hi hai.
//so value humne teen tarike se likhi.
//arr++ nhi kr skte but int*ptr = arr; likhne ke baad likh skte hai.