#include<stdio.h>
int main()
{
    int BS , GS , HRA , DA;
    printf("Enter the number\n");
    scanf("%d" , &BS);
    if(BS<1500)
    {
    HRA = 0.1*BS;
    DA = 0.9*BS;
    GS = BS + HRA + DA;
    printf("%d" , GS);
    }
    if(BS>=1500)
   {
    HRA = 500;
    DA = 0.98*BS;
    GS = BS + HRA + DA;
    printf("%d" , GS);
    }
    return 0;


}