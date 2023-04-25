#include <stdio.h>
int main ()
{
    int i,j,n;

    printf("n=");
    scanf ("%d",&n);

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if (i==j && j<=n/2
              ||j+i==n-1 && i<=n/2
              ||j==n/2 && i>n/2)
            {
                printf ("* ");
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