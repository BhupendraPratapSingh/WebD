#include <stdio.h>
int main()
{
    int a[10], i, max;
    printf("Enter the elements of the array\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 0; i < 10; i++)
    {
        if (a[i] > max) // lets assume that firts element is maximum
            max = a[i];
    }
    printf("%d", max); // har ek braces ke baad sirf ek ji statemnt juda hota hai
    // thats why printf ke niche braces lgane se output nhi ayega but usse upar lgayege toh ajayga
}   
