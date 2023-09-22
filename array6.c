#include<stdio.h>
int main()
{
  int values[5];
  printf("Enter the values of integers\n");
  for(int i=0 ; i<5 ; i++)
  {
    scanf("%d" , &values[i]);
  }
  printf("Display the integers\n");
  for(int i=0 ; i<5 ; i++)
  {
    printf("%d\n" , values[i]);
  }
  return 0;
}

  

  


