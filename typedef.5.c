#include<stdio.h>
int main()
{
    typedef int* intPointer;
    intPointer a,b;
    int c =89;
    a = &c;
    b =&c;  //Now both a and b are pointer and both can store address of c.
    return 0;

}