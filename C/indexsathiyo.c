#include <stdio.h>
int main ()
{
    int i,j,n;

    printf ("n=");
    scanf ("%d",&n);

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if (i==0 && j>n/2
              ||j==n/2
              ||i==n-1 && j<n/2
              ||j==0 && i<n/2
              ||i==n/2
              ||j==n-1 && i>n/2
              ||i==n/4 && j==n/4 
              ||i==n-(n/4)-1 && j==n-(n/4)-1
              ||i==n/4 && j==n-n/4-1
              ||j==n/4 && i==n-(n/4)-1

            )
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        printf ("\n");
    }
    return 0;
}