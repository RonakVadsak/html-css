#include <stdio.h>
#include <string.h>
int main ()
{
    char st[50];
    printf("Enter the name of String:-");
    fgets(st, sizeof(st), stdin);
    puts(st);

    return 0;
}