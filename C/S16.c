#include <stdio.h>
#include <string.h>
int main ()
{
    char a[50];
    int i;

    printf ("Enter the value=");
    fgets(a, sizeof(a), stdin);
    strupr(a);

    if (a[i]>=97 && a[i]<=123)
        {
        a[i]=a[i]-32;
        }

    puts (a);
    return 0;
}