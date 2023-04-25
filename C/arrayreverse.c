#include <stdio.h>
int main ()
{
    int i,n,rev,a[100];

    printf ("n=");
    scanf ("%d",&n);

    for (i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
   for (i=0; i<n/2; i++)
    {
        if (a[n]<a[i])
        {
            rev=a[i];
            a[i]=a[n-1-i];
            a[n-1-i]=rev;
        }
        
    }
    for (i=0; i<n; i++)
    {
        printf ("a[%d] =%d \n",i,a[i]);
    }
    return 0;
}