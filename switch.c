#include<stdio.h>
int main()
{
    int week ;
    printf("Enter the  week number(1-7) ");
    scanf("%d" ,&week);
    switch(week)
    {
        case 1:  //ek  case pe program ko rokne ke liye hum break
         //statement ka use krege //agar break nhi lagayege toh doosra wala case bhi output mein aa jayega that is execute ho jayega ... Try it.
        printf("monday");
        break;
        case 2:
        printf("tuesday");
        break;
        case 3:
        printf("wednesday");
        break;
        case 4:
        printf("thursday");
        break;
        case 5:
        printf("friday");
        break;
        case 6:
        printf("saturday");
        break;
        case 7:
        printf("sunday");
        break;
        default:
        printf("invalid input please enter correct weak number");
    }
    return 0;
}