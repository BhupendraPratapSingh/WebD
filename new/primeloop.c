#include<stdio.h>
int main()
{
    int num =0 , j, i=1 ,count = 1  ;
    printf("print all the prime numbers between 1 to 300");
    scanf("%d", &num);
    while(num<=300)
    {
        j =1;
        count =0;
        while(j<=1)
        {
            if(i%j==0)
            count++;
            j++;

        }
        if(count==2)
        {
        printf("prime no. is %d" , i);
        num++;
        }
        i++;
    }
}