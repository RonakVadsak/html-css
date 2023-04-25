#include <stdio.h>
int main ()
{
    int i,n,j,a[100],b[100];

    printf ("n=");
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        printf ("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    j=n-1;
    for (i=0; i<n; i++)
    {
        b[j]=a[i];
        j--;
    }
    for (i=0; i<n; i++)
    {
    printf ("%d \n", b[i]);
    }


    return 0;
}