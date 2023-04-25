#include <stdio.h>
int main()
{
    int n, a, b, c, reverse;

    printf("n=");
    scanf("%d",&n);

    a=n%10;
    n=n/10;

    b=n%10;
    n=n/10;

    c=n%10;

    reverse= a*100+b*10+c;

    printf("reverse=%d",reverse);

    return 0;


}