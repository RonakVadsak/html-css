#include <stdio.h>
int main ()
{
    int a[100],b[100],c[100],n,i,j;

    printf("n=");
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        printf("a[%d]=",i);
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
    }
    for (j=0; j<n; j++)
    {
        c[i]=b[j];
        i++;
    }
    for (i=0; i<2*n; i++)
    {
        printf ("c[%d]=%d \n",i,c[i]);
    }





    return 0;
}