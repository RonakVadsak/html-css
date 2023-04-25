#include <stdio.h>
#include <string.h>
int main ()
{
    char a[50];
    int i,l1=0,rev;

    printf ("Enter S1name:-");
    fgets(a, sizeof(a), stdin);

    for (i=0; a[i]!='\0'; i++)
    {
        l1++;
    }
    for (i=0; i<l1/2; i++)
    {
        rev=a[i];
        a[i]=a[l1-i-1];
        a[l1-i-1]=rev;   
    }
    puts(a);
    return 0;
}