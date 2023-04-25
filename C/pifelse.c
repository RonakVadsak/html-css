#include <stdio.h>
int main()
{
    int a,b,c;
     printf("a=");
     scanf("%d",&a);

     printf ("b=");
     scanf("%d",&b);

     printf("c=");
     scanf("%d",&c);

    if(a>b)
    {
        printf ("b is max");
    }
    else if(a<c)
    {
        printf("c is max");
    }
    else
    {
        printf ("a is max");
    }
    return 0;
}