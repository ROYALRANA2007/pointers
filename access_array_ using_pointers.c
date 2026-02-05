#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 40,60};
    int *ptr;
    int i;
    ptr = arr;
    printf("the array elments are:\n ");
    for (i = 0; i < 4; i++)
    {
        printf("%d  ", *(ptr + i));
    }
    return 0;
}