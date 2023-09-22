#include <stdio.h>
#include<math.h>
int main()
{
    float a ,b,c,p,area;
    printf("enter the side a\n");
    scanf("%f" ,&a);
    printf("enter the side b\n");
    scanf("%f" ,&b);
    printf("enter the side c\n");
    scanf("%f" ,&c);
    p =(a+b+c)/2; //perimeter of the triangle
    area =sqrt(p*(p-a)*(p-b)*(p-c)); //area of the triangle
    printf("Area of the triangle %f" ,area);
    return 0;
    
}
