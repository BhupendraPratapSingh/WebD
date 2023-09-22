#include<stdio.h>
int main()
{
    int marks[2][4] = {{45 ,234 , 2, 3},{32 ,33 ,34,23}};
    for(int i=0 ; i<2 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
    {
        printf("%d ", marks[i][j]);
    }
     printf("\n"); //to print second row in next line
    
}
return 0;
}
    

    
