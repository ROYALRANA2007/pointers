#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=20 ,b=40;
    swap(&a,&b);
    printf("a=%d and b=%d",a,b);
    return 0;

}