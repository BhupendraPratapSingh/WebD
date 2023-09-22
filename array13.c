#include <stdio.h>
int main()
{
    int a[10], i, flag = 0, key, pos;
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
            pos = i + 1;
            flag = 1;
            break; // break terminates the whole loop(comes outside)
        }
    }
    if (flag == 1)
        printf("\nNumber found at position %d", pos);
    else
        printf("\nNumber is not found");
    return 0;
}
