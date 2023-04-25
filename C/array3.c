#include <stdio.h>
int main ()
{
    int i,a[50],b[50],n;

    printf("n=");
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for (i=0; i<n; i++)
    {
        printf ("a[%d]= %d \n",i,a[i]);
    }
    for (i=0; i<n; i++)
    {
        printf("b[%d]=",i);
        scanf("%d",&b[i]);
    }
    for (i=0; i<n; i++)
    {
        printf("b[%d]= %d \n",i,b[i]);
    }
    

return 0;   
}