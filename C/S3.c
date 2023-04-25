#include <stdio.h>
#include <string.h>
int main ()
{
    int len,i;
    char a[50];

    printf ("Enter name:-");
    fgets(a, sizeof(a), stdin);

    for (i=1; a[i]!='\0'; i++)
    {
        len++;
    }
    printf("%d",len);

    return 0;
}