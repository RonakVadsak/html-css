#include<stdio.h>
int main()
{
    int i,j,n;

    printf("n=");
    scanf("%d",&n);

    for(i=0; i<=n; i++)
    {
        for(j=i; j<n; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
return 0;

}