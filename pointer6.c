//Arrays and pointer arithmetic
#include<stdio.h>
int main()
{
  int a = 34;
  int *ptra = &a;
  printf("%d\n" , ptra);
  printf("%d\n" , ptra+1);
  printf("%d\n", ptra+2);
  return 0;
  //As integer is of 4 bytes so ptra+1 will have 4 more bytes than ptra.Similary ptra+2 will have 8 more bytes than ptra
  
}