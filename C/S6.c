#include <stdio.h>
#include <string.h>
int main ()
{
    char a[50],b[50];
    int i;

    printf("Enter name-");
    fgets(a, sizeof(a), stdin);
    strcpy (b,a);

    for (i=0; a[i]!='\0'; i++)
    {
        b[i]=a[i];
    }
    b[i]='\n';
    puts(a);
    return 0;
}