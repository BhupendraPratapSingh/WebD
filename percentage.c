#include<stdio.h>
int main()
{
    int p , c, m , h, g, aggregate ; 
    float percentage ;  //aggregate is a total marks obtined by a candidate    
   printf("Enter the marks of physics\n");
   scanf("%d" , &p);
   printf("Enter the marks of maths\n");
   scanf("%d" , &m);
   printf("Enter the marks of chemistry\n");
   scanf("%d" , &c);
   printf("Enter the marks of geography\n");
   scanf("%d" , &g);
   printf("Enter the marks of history\n");
   scanf("%d" , &h);
   aggregate = p + c + m +h + g ;
   percentage = (aggregate*100)/500;
   printf("%f" , percentage);
}