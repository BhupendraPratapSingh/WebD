#include<stdio.h>
int main()
{
    int*a ,b; //yaha par 'a' ek pointer hai and 'b' ek integer hai.
    int c =89;
    a = &c;
    b = &c; //yaha par error ayegi because b cannot store a address of c.
            //as it is not a pointer.
}           