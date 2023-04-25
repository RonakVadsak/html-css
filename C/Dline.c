#include<stdio.h>
int main ()
{
    int i,j,n,k;

    printf("n=");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for (k=n; k>i; k--)
        {
            printf("--");
        }
        for (j=1; j<=i; j++)
        {
            printf("%2d",j);
        }


    printf("\n");
    }





    return 0;
}