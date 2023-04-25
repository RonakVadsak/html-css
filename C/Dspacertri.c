#include<stdio.h>
int main ()
{
    int i,j,n,k;

    printf("n=");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        for(k=0; k<i; k++)
        {
            printf("--");
        }
        for(j=n; j>i; j--)
        {
            printf("* ");
        }
    printf("\n");
    }
return 0;


}