#include <stdio.h>
int main ()
{
    int i,a[100],max=0,repeat=0,n;

    printf("n=");
    scanf ("%d",&n);

    for (i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for (i=0; i<n; i++)
    {
       if (max<a[i])
       {
        max=a[i];
       }

    }
    printf("max=%d", max );
  
    for (i=0; i<n; i++)
    {
        if(max==a[i])
        {
        repeat++;
        }
    }
    printf("repeat=%d",repeat);

return 0;
}