 #include<stdio.h>
 int main()
 {
    int a[10] , i;
    printf("Enter the elments of array\n");
    for(i=0 ; i<10 ; i++)
    {
        scanf("%d" , &a[i]);
    }
    printf("The array elemnts are\n");
    for(i=0 ; i<10 ; i+2)
    printf("%d" , a[i]);
    return 0;
 }