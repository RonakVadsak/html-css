#include <stdio.h>
int main ()
{
    int a[50],b[50],c[50],n,i;

    printf ("n=");
    scanf ("%d",&n);

    for (i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for (i=0; i<n; i++)
    {
        printf("b[%d]=",i);
        scanf ("%d",&b[i]);
    }
    for (i=0; i<n; i++)
    {
        c[i]=a[i]+b[i];
    }
    for (i=0; i<n; i++)
    {
        printf("c[%d] =%d \n",i,c[i]);
    }
    return 0;
}