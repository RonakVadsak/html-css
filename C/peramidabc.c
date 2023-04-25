#include<stdio.h>
int main()
{
    int n,i,k,j,a=65;

    printf("n=");
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        for (k=n; k>i; k--)
        {
            printf("--");
        }
        for (j=0; j<=i; j++)
        {
            printf("%2c",a+j);
        }
        for (j=i-1; j>=0; j--)
        {
            printf("%2c", a+j);
        }

    printf ("\n");
    }



return 0;
}