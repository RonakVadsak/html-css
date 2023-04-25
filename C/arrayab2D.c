#include <stdio.h>
int main ()
{
    int i,j,n,a[100][100],b[100][100];

    printf ("n=");
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf ("%d",&a[i][j]);
        }
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("b[%d][%d]=",i,j);
            scanf ("%d",&b[i][j]);
        }
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf ("%d ",a[i][j]);
            printf ("%d ",b[i][j]);
        }
        printf ("\n");
    }
}