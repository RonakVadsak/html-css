#include<stdio.h>
int main()
{
    int a,b;

    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);

    if(a<b)
    {
        printf("a is min");
    }
        else
        {
            printf("b is min");
        }

    return 0;
}