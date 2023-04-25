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

    for (i=0; a[i]!='\0'; i++)
    {
        if (a[i]!=b[i])
        {
            f=1;
            break;
        }
    }
    if (f==0)
    {
        printf ("Both are same ");
    }
    else 
    {
        printf ("Both are not same");
    }
    return 0;
}