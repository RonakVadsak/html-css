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
            if (i==0
              ||i==n-1
              ||i==j+1 && j<n/2
              ||i+1==j && j>n/2
              ||i+j+1==n-1 && i>n/2
              ||i+j-1==n-1 && i<n/2
              ||i==n-2 && j==n-4
              ||i==n-3 && j==n-6
              ||i==n-2 && j==n-8 )
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