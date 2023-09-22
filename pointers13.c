//call by reference
#include<stdio.h>
void changeValue(int*a) // jroori nhi a hi likho address ya kuch  bhi likh skte ho
{
 *a =345;

}
int main()
{
    int a =34 , b=56;
   printf("The value of a is %d\n" , a );
    changeValue(&a);
    printf("The value of a now is %d" , a);
}
//and now the value of a will change which is showing  call by reference.
// value can be change in call by reference.