#include<stdio.h>
int main ()
{
    int i,j,n;

    printf("n=");
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if (i==j)
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (i=1; i<n-1; i++)
    {
        for (j=0; j<n; j++)
        {
            if (j==n-i-1)
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n"); 
    }
    for (i=2; i<n-1; i++)
    {
        for (j=0; j<n; j++)
        {
            if (j==i)
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }
     for (i=2; i<n-2; i++)
    {
        for (j=0; j<n; j++)
        {
            if (j==n-i-1)
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n"); 
    }
    
    

return 0;
}