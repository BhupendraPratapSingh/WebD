#include<stdio.h>
#include<string.h>
union student 
{
    int id ;
    int marks;
    char fav_char;
    char name[34]; 
};
int main()
{
    union student s1;
    s1.marks =45;
    strcpy(s1.name , "Harry");
    s1.fav_char='u';
    s1.id =1;
    printf("The id  is %d \n" , s1.id);
     printf("The  fav_c is %c \n" , s1.fav_char);
   printf("The  marks is %d \n" , s1.marks);
    printf("The  name is %s \n" , s1.name);
    //now yaha pe name , marks and fav_char corrupt ho jayega.
    //But id correct aa jayega.
    //as it will take one memory at a time.
    //agr hum pehle number pe id rakhe toh woh shi aa jayega baki
    //sb corrupt ho jayge means woh garbage value dege.
     

}