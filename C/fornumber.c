#include<stdio.h>
int main ()
{
    int i,j,k,n;

    printf("n=");
    scanf("%d",&n);

    for (i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++ )
        {
            printf("%d",j);
        }





        printf("\n");
    }




    return 0;
}