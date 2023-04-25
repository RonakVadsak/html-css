#include<stdio.h>
int main()
{
    int a;

    printf("a=");
    scanf("%d",&a);

    if (a<100)
    {
        printf("a is max");
    }
    else
    {
        printf("a is min");
    }

    return 0;
}