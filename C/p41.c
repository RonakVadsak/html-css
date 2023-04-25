#include <stdio.h>
int main()
{
    int i,n,a=1;

    printf ("n=");
    scanf ("%d",&n);

    for (i=n; i>0; i--)
    {
        a=a*i;
        printf ("%d \n",a);
    }
    return 0;
}