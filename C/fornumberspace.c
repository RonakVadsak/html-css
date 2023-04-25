#include<stdio.h>
int main()
{
    int i,j,n,k;

    printf("n=");
    scanf("%d",&n);


    for (i=1; i<=n; i++)
    {
       for (k=1; k<i; k++)
       {
        printf("  ");
       }
        
        for (j=i; j<=n; j++)
        {
            printf("%d ",i);
        }


        printf("\n");
    }


    return 0;
}