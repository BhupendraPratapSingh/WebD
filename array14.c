#include <stdio.h>
int main()
{
    int a[10], i, flag = 0, key,  count=0;
    printf("Enter the elements of the array\n"); // key is the element which is to be searched
    for (i = 0; i < 10; i++)                     // pos is the index of that number
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the elements which is to be search\n");
    scanf("%d", &key);
    for (i = 0; i < 10; i++)
    {
        if (a[i] == key)
        {
            count++;
            flag = 1; // break terminates the whole loop(comes outside)
        }
    }
    if (flag == 1)
    {
        printf("\nfrequency of a number is %d", count);
    }
    else
        printf("\nNumber is not found");
    return 0;
}
