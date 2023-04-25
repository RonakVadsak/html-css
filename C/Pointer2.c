#include <stdio.h>
int main ()
{
    int a,*p,b,*q,sum;

    printf("a=");
    scanf("%d",&a);

    printf("b=");
    scanf("%d",&b);

    p=&a;
    q=&b;

    sum= *p + *q;
    
    printf("%d",sum);

    return 0;
}

// sum of pointer:-