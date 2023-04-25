#include<stdio.h>
int main ()
{
    int i,j,n,a=1;

    printf("n=");
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            a++;
            printf("%2d",a%2);
      
        }
    printf("\n");
    }
return 0;
}