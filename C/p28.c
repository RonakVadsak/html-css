#include<stdio.h>
int main ()
{
    int a,b,c;

    printf ("a=");
    scanf("%d",&a);

    printf("b=");
    scanf("%d",&b);

    printf("c=");
    scanf("%d",&c);

    if(a<b)
    {
        if (b<c)
        {
            printf("c is max");
        }
        else
        {
            printf("b is max");
        }
    }
    else
    {
        printf("a is max");
    }
    return 0;
}
