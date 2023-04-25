#include<stdio.h>
int main()
{
    int i,j,n,f=0;

    printf("n=");
    scanf("%d",&n);

    for (i=2; i<n; i++)
    {
        if (n%i==0)
        {    
            f=1;
             break;
        }
    }
    if (f==0)
    {
        printf (" THIS IS PRIME NUMBER ");

    }
    else 
    {
        printf("THIS IS NOT PRIME NUMBER ");
    }


return 0;


}