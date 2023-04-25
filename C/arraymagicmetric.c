#include <stdio.h>
int main ()
{
    int n,a[100][100],dio,row,col,i,j,f;

    printf ("n=");
    scanf("%d",&n);

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
            printf ("a[%d][%d]=%d",i,j,a[i][j]);
        }
        printf("\n");
    }

    dio=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if (i==j)
            {
                dio=dio+a[i][j];
            }
        }
    } 

    for (i=0; i<n; i++)
    {
        row=0;
        for (j=0; j<n; j++)
        {
            row=row+a[i][j];
        }
        if (dio==row)
            {
                f=1;
            }
            else 
            {
                f=0;
                break;
            }
    }

    for (i=0; i<n; i++)
    {
        col=0;
        for (j=0; j<n; j++)
        {
            col=col+a[i][j];
        }
        if (dio==col)
            {
                f=1;
            }
            else 
            {
                f=0;
                break;
            }
    }

    
    if (f==1)
    {
        printf (" That is a magic");
    }
    else 
    {
        printf (" That is not a magic");
    }
return 0;

}