#include<stdio.h>
int main ()
{
    int i,j,n,a=65;

    printf("n=");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("%2c",a+j);
        }
        printf("\n");
    }



    return 0;
}