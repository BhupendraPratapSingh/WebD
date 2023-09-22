#include<stdio.h>
struct Student
{
    int id;
    int marks;      //struct type user defined data type.
    char fav_char;
};
int main()
{
    struct Student harry , ravi , shubham;//structure name = harry , ravi , shubham.
    harry.id= 1;     //member name = id , marks , fav_char
    ravi.id= 2;       
    shubham.id = 3;
    harry.marks = 450;
    ravi.marks=466;
    shubham.marks =455;
    harry.fav_char ='p';
    ravi.fav_char = 'p';
    shubham.fav_char ='l';
    printf("harry got %d marks\n" , harry.marks);
    printf("shubham got %d marks\n" , shubham.marks);
    printf("ravi got %d marks\n" , ravi.marks);
    printf("harry got %d id no.\n" , harry.id);
    printf("ravi got %d id no.\n." , ravi.id);
    printf("shubham got %d id no.\n" , shubham.id);
    printf("harry fav character is %c\n" , harry.fav_char);
    printf("shubham fav character is %c\n" , shubham.fav_char);
    printf("ravi fav character is %c\n" , ravi.fav_char);
    return 0;
}