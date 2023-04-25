#include <ctype.h>
#include <stdio.h>
int main ()
{
    char a;

    printf(" Enter value=");
    scanf ("%c",&a);
    
    if(isalpha(a))
    {
        printf("IT IS ALPHABET");
    }
    else 
    {
        printf("IT IS NOT ALPHABET");   
    }
    return 0;
}