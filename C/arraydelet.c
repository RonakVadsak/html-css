#include <stdio.h>
int main ()
{
    int pos,i,a[100],n;

    printf("n=");
    scanf("%d",&n);

    printf("pos=");
    scanf("%d",&pos);

    for (i=0; i<n; i++)
    {
        printf ("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for (i=pos; i<n-1; i++)
    {
        a[i]=a[i+1];
    }
    for (i=0; i<n-1; i++)
    {
        printf ("a[%d] =%d \n",i,a[i]);
    }
return 0;
}