#include <stdio.h>
int main ()
{
    int i,j,n,f;

    printf ("n=");
    scanf ("%d",&n);

    for (i=0; i<n; i++)
    {
        for (j=2; j<i; j++)
        {
            f=0;
            if (i%j==0)
            {
                f++;
                break;
            }
            
        }
        if (f==0)
        {
            printf("%d \n",i);
        }
    }
    return 0;
}