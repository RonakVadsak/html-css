#include <ctype.h>
#include<stdio.h>
int main ()
{
    char a;

    printf ("Enter value=");
    scanf("%c",&a);

    if (isdigit(a))
    {
        printf ("IT IS DIGIT");
    }
    else
    {
        printf ("IT IS NOT DIGIT");
    }
    return 0;
}