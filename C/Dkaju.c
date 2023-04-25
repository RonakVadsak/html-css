#include<stdio.h>
int main ()
{
    int i,j,n,k;

    printf("n=");
    scanf("%d",&n);

    for (i=0; i<n-1; i++)
    {
        for(k=i; k<n-1; k++)
        {
            printf("--");
        }
        for(j=0; j<=i; j++)
        {
            printf("* ");
        }
        for(j=i-1; j>=0; j--)
        {
            printf("* ");
        }
    printf("\n");
    }
        for(i=0; i<n; i++)
        {
            for(k=1; k<i+1; k++)
            {
                printf("--");
            }
            for (j=i; j<n; j++)
            {
                printf("* ");
            }
            for(j=i; j<n-1; j++)
            {
                printf("* ");
            }

            printf("\n");
        }
return 0;

}