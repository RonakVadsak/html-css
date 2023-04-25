#include<stdio.h>
int main ()
{
    int i,j,n;
    printf("n=");
    scanf ("%d",&n);

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if (j==n/2-1 ||j==n-i-1 && i<n/2 ||i==j && i>=n/2 )
            {
                printf("* ");
            }
            else 
            {
                printf ("  ");
            }
        }
        printf("\n");
    }
    return 0;
}