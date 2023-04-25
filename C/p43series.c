# include <stdio.h>
int main ()
{
    int n,n0,i,j,r,arm,n1;

    printf("n=");
    scanf ("%d",&n);

    for (i=0; i<n; i++)
    {
        arm=0;
        n0=i;
        n1=i;
        while (n0>0)
        {
            r=n0%10;
            arm=arm +(r*r*r);
            n0=n0/10;
        }
        if (n1==arm)
        {
            printf("%d \n",arm);
        }
        
    }
    return 0;
}