#include<stdio.h>
int main ()
{
    int index=0 , num ;    //initialization 
    printf("Enter the number\n");
    scanf("%d" , &num);
    do
    {
        
        printf("%d\n" , index);
        index =index+1;  //updation
    } 
    while (index<num);    //condition
    return 0;
  
}