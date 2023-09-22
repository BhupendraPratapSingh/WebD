#include<stdio.h>
int fibonnaci(int num);
int main()
{
    int num;
    printf("enter the number\n" , num);
    scanf("%d" , &num);
    printf("%d" , fibonnaci(num));
    return 0;
}
int fibonnaci(int num)
{
    int n1 =0 , i ,n2 =1 , n3;
    printf("%d" , num);
    for(i<=2 ; i<=num ; i++ )
    {
        printf("%d" , n3);
        n1 = n2;
        n2 = n3;
        n3 = n1+n2;
    }
}

 