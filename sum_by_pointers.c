#include <stdio.h>
void add(int *a, int *b)
{
    int sum = 0;
    sum = *a + *b;
    printf("sum is %d", sum);
}
int main()
{
    int a = 20, b = 40;
    add(&a, &b);

    return 0;
}