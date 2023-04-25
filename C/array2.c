#include <stdio.h>
int main ()
{
    int i,a[5],c,n;

    printf("n=");
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for (i=0; i<5; i++)
    {
        printf ("a[%d]= %d \n",i,a[i]);
    }
    return 0;
}