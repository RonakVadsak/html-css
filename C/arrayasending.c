#include<stdio.h>
int main ()
{
    int a[100],n,i,j,ase;

    printf ("n=");
    scanf ("%d",&n);

    for (i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf ("%d",&a[i]);
    }

    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (a[i]>a[j])
            {
               ase=a[i];
               a[i]=a[j];
               a[j]=ase; 
            }
        }
    printf ("a[%d] =%d \n",i,a[i]);
    }
    

    return 0;
}