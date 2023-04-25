#include <stdio.h>
#include <string.h>
int main ()
{
    int i;
    char a[50];

    printf("Enter namr-");
    fgets(a, sizeof(a), stdin);
    i=strlen(a);
    printf("%d",i);
    
return 0;
}