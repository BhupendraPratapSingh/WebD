//Take input from a user
#include<stdio.h>
void printstr(char str[])//passing array to the function wahi concept use ho rha hai yaha par.
{
    int i=0;
    while(str[i] !='\0')
    { 
        printf("%c" , str[i]);
        i++;
    }
}
int main()
{
printf("input a string\n");
char str[34];
gets(str); // function to input a string.
printstr(str);//fuction to print a string.
printf("\n");
puts(str);//function to print string.
return 0;
    
}