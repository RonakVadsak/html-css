#include <stdio.h>
int main ()
{
    int a;
    int *p;
    p=&a;
    printf ("a=");
    scanf ("%d",&a);

    printf("%d",*p);
    printf("%p",p);

return 0;

}

//simple:-


// address and value of pointer