#include<stdio.h>
int main ()
{
    int a,b,c;

    printf("a=");
    scanf("%d",&a);

    printf("b=");
    scanf("%d",&b);

    printf("c=");
    scanf("%d",&c);

     if (a>b)
     
     {
        printf("b is min");
     }
     else if (a>c)
     {
        printf("c is min");
     }
     else
     {
        printf("a is min");
     }

return 0;
}