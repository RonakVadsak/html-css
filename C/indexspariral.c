#include <stdio.h>
int main ()
{
    int i,j,n,a=1;

    printf ("n=");
    scanf ("%d",&n);

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if (i==0 || j==n-1)
            {
                printf ("%2d",a++);
            }
            else if (j==n-1)
            {
                printf ("%2d",a++);
            }
            else if (i==n-1)
            {
                printf ("%2d",a++);
            }
            else 
            {
                printf ("  ");
            }
        }
        printf ("\n");
    }
return 0;
}