#include <stdio.h>
#include <string.h>
int main ()
{
    char a[50];
    int i,capital=0,small=0;

    printf ("Enter value=");
    fgets (a, sizeof(a),stdin);

    for (i=0; a[i]!='\0'; i++)
    {
        if (a[i]>=65 && a[i]<=91)
        {
            capital++;
        }
    }
    for (i=0; a[i]!='\0'; i++)
    {
        if (a[i]>=97 && a[i]<=123)
        {
            small++;
        }
    }
    printf("capital=%d \n",capital);
    printf("small=%d \n",small);
    return 0;
} 