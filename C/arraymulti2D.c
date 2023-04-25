#include <stdio.h>
int main ()
{
    int a[100][100],b[100][100],c[100][100],i,j,n,k,sum;

    printf ("n=");
    scanf ("%d",&n);

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf ("a[%d][%d]=",i,j);
            scanf ("%d",&a[i][j]);
        }
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf ("b[%d][%d]=",i,j);
            scanf ("%d",&b[i][j]);
        }
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            sum=0; 
            for (k=0; k<n; k++)
            {
                sum=sum+a[i][k]*b[k][j];
                c[i][j]=sum;
            }
        }
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf ("%d ",c[i][j]);
        }
        printf("\n");
    }




    return 0;
}