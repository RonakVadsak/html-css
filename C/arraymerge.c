#include <stdio.h>
int main ()
{
    int i,a[100],b[100],c[100],n,j;

    printf ("n=");
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        printf ("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for (i=0; i<n; i++)
    {
        printf("b[%d]=",i);
        scanf("%d",&b[i]);
    }
    for (i=0; i<n; i++)
    {
        c[i]=a[i];
        c[i+n]=b[i];
    }
    for (i=0; i<n*2; i++)
    {
        printf ("c[%d]=%d \n",i,c[i]);
    }


return 0;
}