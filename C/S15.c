#include <stdio.h>
#include <string.h>
int main ()
{
    int i;
    char a[50];

    printf("Enter value=");
    fgets(a, sizeof(a), stdin);

    for(i=0; a[i]!='\0'; i++) 
    {
        if (a[i]>=97 && a[i]<=123)
            a[i]=a[i]-32;
    }
    puts(a);
    return 0;
}



