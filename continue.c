 #include<stdio.h>
int main()
{
    int i , age;
    for(  i= 0 ; i<10 ; i++) 
    {
    printf("Enter your age\n"  );
    scanf("%d" , &age);
    if(age>9)
    {
        continue;
    }
    printf("you are eligible\n ");
    printf("you are smart\n");
    return 0;
    }   }       //jab tak hum age less than 9 dalege tab tak ye
    // print krega but jaise hum age greater than dalege ye jo lines hai(printf) woh kam hi nhi kregi 