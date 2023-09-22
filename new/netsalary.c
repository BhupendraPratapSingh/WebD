#include<stdio.h>
int main()
{
float DA ,BS,HRA ,fund ,grossalary,netsalary;//net salary =gros salary-all funds deducted         //BS = basic salary
printf("enter the basic salary of an employee");
scanf("%f" , &BS);
DA = 0.25*BS; //25 percent of the basic salary    //DA =pension
HRA = 0.15*BS; //15 percent of the basic salry    // HRA =house allowence rent
grossalary =( BS + DA + HRA);
fund =0.1*grossalary;//fund is 10 percent os the grosslry
netsalary = grossalary-fund; 
printf("the net salary of an employee  %f" , netsalary);
return 0;


}  