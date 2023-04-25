#include <stdio.h>
int main ()
{
    int i,j,n,a=0,b=1,c,d;

    printf ("n=");
    scanf ("%d",&n);

    printf ("%d \n",a);
    printf("%d \n",b);

    for (i=0; i<n; i++)
    {
        printf ("%d \n", c=a+b);
        a=b;
        b=c;
    }
    return 0;
}