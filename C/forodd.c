#include<stdio.h>
int main ()
{
    int i,j,n,k,a=0;

    printf("n=");
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {   
        for (k=n; k>i; k--)
        {
            printf("---");
        }
        for (j=0; j<=i; j++)
        {
            a++;
            if (a%2==1)
            {
            printf(" %2d",a++);
            }
            else
            {
                printf (" ");
            }
        }
      


        printf("\n");
    }



    return 0;
}