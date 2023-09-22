#include <stdio.h>

int main()
{
    int num1,num2,num3;
    printf("Enter three Numbers\n");
    scanf("%d %d %d",&num1,&num2,&num3);// if there is only one case then no break is required. 
switch(num1>num2 && num1>num3)
{
    case 1:
   printf("%d is largest",num1);
    
}
switch(num2>num1 && num2>num3)
{
    case 1:
   printf("%d is largest",num2);
   

}
switch(num3>num1&&num3>num2)
{
    case 1:
   printf("%d is largest",num3);

    
}
return 0;
}