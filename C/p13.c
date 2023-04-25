#include <stdio.h>
int main ()
{
    int n, a, b, c, sum;

    printf ("n=");
    scanf("%d",&n);

    a=n%10;
    n=n/10;

    b=n%10;
    n=n/10;

    c=n%10;

    sum=a+c;

    printf("sum=%d",sum);
    
    return 0;


}
