#include<stdio.h>
#include<string.h>
int main()
{
    char string1[] = "harry";
    char string2 []="ravi";
    printf("The length of a string1 is %d\n"  ,strlen(string1));
    printf("The length of a string1 is %d\n"  ,strlen(string2));
    printf("The reversed string1 is %s\n" , strrev(string1));
    printf("The reversed string2 is ");
    puts(strrev(string2));
    printf("The combine string is %s\n" , strcat(string1 , string2));
    printf("The strcmp for sting1 and string2 is %d" , strcmp(string1 , string2));//gives the difference between ascii values of first word of a string.
    return 0;

}