#include <stdio.h>
#include <string.h>
int main ()
{
    char a[50],b[50];
    int i,f=0;

    printf ("add value=");
    fgets(a, sizeof(a), stdin);

    printf ("add value=");
    fgets(b, sizeof(b), stdin);

    i=strcmp(a,b);
    if (i==0)
    {
        printf (" Both are same ");
    }
    else 
    {
        printf ("Both are not same ");
    }

return 0;
}