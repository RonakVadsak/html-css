#include <stdio.h>
int main ()
{
    int min,n, max, a[100],i;

    printf ("n=");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
    printf("a[%d]=",i);
    scanf("%d",&a[i]);
    }

    min=a[0];
    for (i=1; i<n; i++)
    {
        if (min>a[i])
        {
            min=a[i];
        }
    }
    printf ("\n min=%d ",min);
       

return 0;
}