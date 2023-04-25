#include <stdio.h>
int main ()
{
    int min,n, max, a[100],i;

    printf ("n=");
    scanf ("%d",&n);

    for(i=0;i<n;i++)
    {
    printf("a[%d]=",i);
    scanf("%d",&a[i]);
    }
    max=a[0];
    for (i=1; i<n; i++)
    {
        if (max<a[i])
        {
            max=a[i];
        }
    }
    printf ("\n max=%d ",max);
       

return 0;
}