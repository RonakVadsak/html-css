#include <stdio.h>
int main ()
{
    int i,n,a[5], b[5], c[5];

    for (i=0; i<5; i++)
    {
        printf("a[%d]=",i);
        scanf ("%d",&a[i]);
        printf ("b[%d]=",i);
        scanf ("%d",&b[i]);

    }
    for (i=0; i<5; i++)
    {
        printf("a[%d]= %d \n",i,a[i]);
        printf("b[%d]= %d \n",i,b[i]);

        
    }
    for (i=0; i<5; i++)
    {
        c[i]=a[i]+b[i];
        printf ("c[%d]= %d \n",i,c[i]);
    }

  return 0;  
}