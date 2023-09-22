//passing array as an function arguments/actual parameters.
#include<stdio.h>
int func1(int array[])// array[] contains the address of arr[].
{
    for(int i=0 ; i<4 ; i++)
    {
        printf("The value at %d is %d\n" , i ,array[i] );
    }
    array[0]=382;//if you change any value here it will get reflected in main().
                 // example of call by reference.
}
int main()
{ 
    int arr[] ={23 , 13, 3 , 4};
    printf("The value at index 0 is %d\n" , arr[0]);
    func1(arr);
    printf("The value at index 0 is %d\n", arr[0]);
    return 0;
}