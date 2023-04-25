#include <stdio.h>
int main ()
{
    int i,k,n,j;
    printf("n=");
    scanf("%d",&n);

    for(i=0; i<n-1; i++)
    {
        for(k=n-1; k>i; k--)
        {
            printf("--");
        }
        for(j=0; j<=i; j++)
        {
            printf("* ");
        }
        for (j=0; j<i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i=0; i<n; i++)
    {
        for (k=0; k<i; k++)
        {
            printf("..");
        }
        for(j=i; j<n; j++)
        {
            printf("* ");
        }
        for (j=i; j<n-1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=1; i<n-2; i++)
    {
        for (k=n-1; k>i; k--)
        {
            printf("--");
        }
        for(j=0; j<=i; j++)
        {
            printf("* ");
        }
        for(j=0; j<i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    

return 0;
}