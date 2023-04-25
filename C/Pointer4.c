#include <stdio.h>
int main ()
{
    int a[50], *p, b[50], *q, sum, i,n;

    printf("n=");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
    printf("a[%d]=",i);
    scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
    printf("b[%d]=",i);
    scanf("%d",&b[i]);
    }

    p=&a[0];
    q=&b[0];

    for(i=0; i<n; i++)
    {
        sum= *p + *q;
        printf("sum=%d \n",sum);
        p++;
        q++;
    }

    return 0;

}

//sum in array with pointer:-