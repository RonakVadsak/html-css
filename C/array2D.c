#include <stdio.h>
int main ()
{
    int i,j,n,a[100][100];

    printf ("n=");
    scanf ("%d",&n);

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf ("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf ("%d ",a[i][j]);
        }
        printf ("\n");
    }

    return 0;
}