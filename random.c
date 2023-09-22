#include<stdio.h>
int main(){
    
     int mathmatics=93, english=74,hindi=85,science=97,socialscience=81, sum;
    printf("Jawahar Navodaya Vidyalaya\n");
    printf("Annual report card\n");
    printf("Name:Sriyank siddhartha\n");
    printf("Standard:10\n");
    printf("Section:A\n");
    printf("Marks Secured Out of 100\n");
    sum=mathmatics+english+hindi+science+socialscience;
    printf("Total marks secured is=%d\n",sum);
     if (sum>=450 && sum<=500)
{
    printf("grade A\n");
}
if (sum>=400 && sum<=449)
{
    printf("grade B\n");
}
if (sum>=350 && sum<=399)
    {
        printf("grade C\n");
    }
if (sum>=300 && sum<=349)
{
    printf("grade D\n");

}
if (sum>=320 && sum<=330);
{
    printf("grade E\n");
}
if (sum<200)
{
printf("grade F\n");
}

    return 0;
}