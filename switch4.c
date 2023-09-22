#include<stdio.h>
int main()
{
    int p , c, m ,h ,g ,  per , sum=0;
    printf("Enter the marks of physics\n , chemistry\n , maths\n , history\n , geography\n");
    scanf("%d%d%d%d%d" , &p , &c , & m , &h , &g);
    sum = p+c+m+g+h;
    per = (sum*100)/500;
     if(per>=60)
     {
     printf("first division\n");
    }  
    else if(per>=50 && per<60)
    {
        printf("Second division\n");
    }
    else if(per>=40 && per<50 )
    {
        printf("third division\n");
    }
    else if(per<40)
    {
        printf("fail\n");
    }
    return 0;
}
