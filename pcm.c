#include<stdio.h>
#include<math.h>
int main()
{
    int p , c ,m ,pm ,pcm;
    pm =p+m;    //sum of marks of physics and maths
    pcm=p+c+m; //sum of marks of physics chemistry and maths
    printf("enter the marks of physics");
    scanf("%d" ,&p);
    printf("enter the marks of maths");
    scanf("%d" ,&m);
    printf("enter the marks of chemistry");
    scanf("%d" ,&c);
    if(p>40 && c>50 && m>60 && (pm>150||pcm>200))
    printf("you are eligible for couse ");
    else
    printf("you are not eligible for a course ");
}
