# include <stdio.h>
int main ()
{
    int i,a[50],n,pos,neg;

    printf ("n=");
    scanf ("%d",&n);

    for (i=0; i<n; i++)
    {
        printf ("a[%d]=",i);
        scanf ("%d",&a[i]);
    }
    for (i=0; i<n; i++)
    {
        pos=0;
        if (pos<a[i])
        {
            pos=a[i];
            printf ("pos=%d \n",pos);
        }
    }
    for (i=0; i<n; i++)
    {
        neg=0;
        if (neg>a[i])
        {
            neg=a[i];
            printf ("neg=%d  \n",neg);
        }
    }
    return 0;
}