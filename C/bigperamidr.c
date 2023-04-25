#include<stdio.h>
int main ()
{
    int i,k,j,n;

    printf("n=");
    scanf("%d",&n);
    
    for(i=0; i<n; i++)
    {

        for (k=0; k<i; k++)
        {
            printf("  ");
        }
        for (j=i; j<n; j++)
        {
            
            printf("* ");
        }
        for (j=i; j<n-1; j++)
        {
            printf("+ ");
        }
        printf("\n");
    }





    return 0;
}