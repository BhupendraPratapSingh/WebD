#include<stdio.h>
int main()
{
    char a ='34';
    char*ptra =&a;
    printf("%d\n" , ptra);
    printf("%d\n" , ptra+2);
    printf("%d\n" , ptra-2);
    printf("%d\n" , ptra+1);
    return 0;
} //As character takes only one byte so ptra+2 will increase by 2 and ptra-2 will decrease by 2