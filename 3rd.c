#include<stdio.h>
#include<math.h>
void main()
{
    int num , c=0 ;
    float r ; 
    int square ;
    float root ;
    printf("Enter the number\n");
    scanf("%d" , &num);
    while(num!=0)
    {
        num = num/10;
        c++;
        r = num%10;
      if(c==2)
      {
      square = r*r;                      // if ke baad agar braces open nhi kroge toh woh sirf square wali line ko hi read read krega aur age badh jayega .and simply sirf square hi print krega but braces lagane pe dono cheeze print   ho jayegi.
      root = sqrt(r);
      }
    }
    printf("%d\n" , square);
    printf("%f\n" , root);
    
}
      

