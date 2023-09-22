#include<stdio.h>
int main()
{
    int i , age;
    for(  i= 0 ; i<10 ; i++)
    {    
    printf("Enter your age\n" , i);
    scanf("%d" , &age);
    if(age>9)
    break;          //break  statement program ko loop se bhar fek deta  hai
                    //break statement sirf loop ke andar hi execute krege , if brackets are missing   then an error will be shown 
                    //also if two loop are there then break jis loop ke andar hoga sirf wahi termeinate hoga aisa nhi hai ki pura program and others loop bhi terminate ho jaege.
    }                                     
}                   //  toh jab tak hum input less than 9 dege tab tak enter the age
                   // baar baar ayega(loop) but jaab hum no. greater than 9 dalege
                  // then loop terminate ho jayega
                  //break ka sidha mtlb hai jo bhi loop chal rha hai use bahar fek do
                  //nested loop ke case mein apko sirf ek loop se bahar feka jayega
                 // sidha bahar nhi feka jayega
                 //agar for ke andar for hota toh jis for ke andar break hota uss
                 //wale loop se bahar aayege na ki dono