#include <stdio.h>
int main ()
{
    int a, *p, b, *q;

    printf("a=");
    scanf("%d",&a);

    printf("b=");
    scanf("%d",&b);

    p=&a;
    q=&b;

    *p=*p + *q ;
    *q=*p - *q;
    *p=*p - *q;

    printf("a=%d \n",*p);
    printf("b=%d \n",*q);
    
    return 0;
}

//swaping of pointer:-