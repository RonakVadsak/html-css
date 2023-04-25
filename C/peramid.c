#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("n=");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        for(k=i; k<n-1; k++)
        {
            printf("-");
        }
        for(j=0; j<=i;j++)
        {
            printf("* ");
        }
    printf ("\n");
    }
    return 0;
}