#include <stdio.h>
int main ()
{
    int i,n,pos,value,a[100];

    printf("n=");
    scanf ("%d",&n);

    printf ("pos=");
    scanf("%d",&pos);

    printf("value=");
    scanf("%d",&value);

    for (i=0; i<n; i++)
    {
        printf ("a[%d]=",i);
        scanf("%d",&a[i]);
    }

    for (i=n-1; i>=pos; i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=value;
    n++;
    for (i=0; i<n; i++)
    {
        printf("a[%d] =%d \n",i, a[i]);
    }



return 0;
}