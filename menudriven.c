#include<stdio.h>
int main()
{
int ch , length ,radius , breadth ,base , height ;
float area;
 printf("Enter 1 for area ofcircle\n");
 printf("Enter 2 for area of rectangle\n");
 printf("Enter 3 for area of triangle\n");
 printf("Enter your choice");
 scanf("%d" , &ch);
 switch(ch)
 {
     case 1:
     printf("enter the radius of the circle");
     scanf("%d" , &radius);
     area = 3.14*radius*radius;
     break;
     case 2:
     printf("enter the lenght and breadth of the rectangle");
     scanf("%d%d" , &length,&breadth);
     area = length*breadth;
     break;
     case 3:
     printf("enter the base and hiegt of the triangle");
     scanf("%d%d" , &base , &height);
     area = 0.5*base*height;
     break;
 }
     printf("the area is %f" , area);  

}