#include <stdio.h>
#include <string.h>
int main ()
{
    char a[50];
    int i;

    printf ("add value=");
    fgets(a, sizeof(a), stdin);
    LCase(a);

    if (a[i]>=65 && a[i]<=91)
    {
        a[i]=a[i]+32;
    }
    puts (a);

    return 0;
}