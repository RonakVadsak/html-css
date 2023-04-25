#include <stdio.h>
#include <string.h>
int main ()
{
    char a[50];
    int i,n;

    printf("n=");
    fgets(a, sizeof(a), stdin);

    for(i=0; a[i]!='\0'; i++) 
    {
        if (a[i]>=65 && a[i<=91])
        a[i]=a[i]+32;
    }
    puts(a);
    return 0;
}