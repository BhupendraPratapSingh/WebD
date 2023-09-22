#include<stdio.h>
int main()
{
    int marks[2][4]={{45,23,2,3},{34, 56 ,12 , 38}};
    for(int i=0 ; i<2 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
printf("The value of %d , %d element of array is %d\n" , i , j , marks[i][j]);
        }
        return 0;
    }

    
    
}