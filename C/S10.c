#include <stdio.h>
#include <string.h>
int main ()
{
    char a[50];

    printf ("Enter name-");
    fgets(a, sizeof(a), stdin);

    strrev(a);
    
    puts(a);
    return 0;
}