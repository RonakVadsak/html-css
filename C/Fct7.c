#include <stdio.h>
void factorial ();
int main ()
{
    factorial();
    return 0;
}
void factorial()
{
    int factorial,a=1,i,n;

    printf ("n=");
    scanf ("%d",&n);
    for (i=1; i<=n; i++)
    {
        a=a*i;
    }
    printf("%d",a);
}

//make factorial without perameter and without return; 