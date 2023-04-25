#include <stdio.h>
#include <string.h>
int main ()
{
    char a[50],b[50];
    int i;

    printf("Enter S1name-");
    fgets(a, sizeof(a), stdin);

    printf("Enter S2name-");
    fgets(b, sizeof(b), stdin);
    
    strcat (a,b);
    puts(a);
    return 0;

}