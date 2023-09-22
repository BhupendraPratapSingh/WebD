#include<stdio.h>
int main ()
{
    char grade = 'B';
    switch(grade)
    {
         case 'A' :
         printf("excellent\n");
         break;
         case 'B' :
         printf("well done\n");
         break;
         case 'C' :
         printf("you passed\n");
         break;
         case 'F':
         printf("better try again\n");
         break;
         default:
         printf("invalid integer\n");
    }    printf("your grade is %c\n" , grade);
     return 0;
}