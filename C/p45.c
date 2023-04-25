#include <stdio.h>
int main ()
{
    int i,a[5],b[5],c, sum;

    for (i=0; i<5; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
         
       
    }
    for (i=0; i<5; i++)
    {
        printf ("a[%d]= %d \n", i,a[i]);
        sum=sum+a[i];
    }
    printf("sum=%d",sum);
}