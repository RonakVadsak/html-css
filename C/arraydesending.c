#include <stdio.h>
int main ()
{
    int i,j,n,a[100],des;
    printf("n=");
    scanf ("%d",&n);

    for (i=0; i<n; i++)
    {
        printf ("a[%d]=",i);
        scanf ("%d",&a[i]);
    }
    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (a[i]>a[j])
            {
                des=a[i];
                a[i]=a[j];
                a[j]=des;
            }
        }
    printf("a[%d] =%d \n",i,a[i]);
    }

    return 0;
}