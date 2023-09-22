#include<stdio.h>
int  main()
{
    int a[3][3]  , i ,sum ,j;
    printf("Enter the elements of Array\n");
    for(i=0 ; i<3 ; i++)
    for(j=0 ; j<3 ; j++)
    {
        scanf("%d" , &a[i][j]);         //input
    }
    printf("The array elements are\n");
    for(i=0 ; i<3 ; i++)
    {
        printf("\n");
        for(j=0 ; j<3 ; j++)
        printf("%d  " , a[i][j]);    //display
    }
    
    for(i=0 ; i<3 ; i++)
    {
        sum=0;
        for(j=0 ; j<3 ; j++) // i ki ek value ke liye j ka loop pua chlega
        sum =sum+a[i][j];
        printf(" row wise sum is  %d " , sum);
    }
        // dry run it for better understanding

    for(i=0 ; i<3 ; i++)
    {
        sum=0;
        for(j=0 ; j<3 ; j++)
        sum =sum+a[j][i];
        printf(" coloumn wise sum is %d " , sum);     
        }    // dry run it for better understanding
    
   
    return 0;

}