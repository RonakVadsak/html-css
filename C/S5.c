#include <stdio.h>
#include <string.h>
int main ()
{
    char a[50],b[50];
    int i;

    printf("Enter string-");
    fgets(a, sizeof(a), stdin);

    for (i=0; a[i]!='\0'; i++)
    {
        b[i]=a[i];
    }
    b[i]='\0';
    puts(a);
    return 0;
}