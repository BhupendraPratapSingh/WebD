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
    char str[]={'h' , 'a' , 'r' , 'r' ,'y' , '\0'}; //also we can write char str[]="harry";
    printstr(str);
    return 0;
    
}