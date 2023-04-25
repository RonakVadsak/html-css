#include <stdio.h>
int main ()
{
    int i,t,n,no,n1,r,reverse;

    printf ("n=");
    scanf ("%d",&n);

    for (i=0; i<n; i++)
    {
        no=i;
        n1=i;
        reverse=0;
        while (no>0)
        {
            r=no%10;
            reverse=reverse *10+r;
            no=no/10;
        }
        if (n1==reverse)
        {
            printf("\n%d",reverse);
        }

    }


return 0;
}
