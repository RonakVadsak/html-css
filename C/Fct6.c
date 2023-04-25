#include <stdio.h>
void fibonacci();
int main ()
{
    fibonacci();
    return 0;
}
void fibonacci ()
{
    int fibonacci,i,n,a=0,b=1,c;
    printf ("n=");
    scanf ("%d",&n);
    printf ("%d \n",a);
    printf ("%d \n",b);
    
    for (i=0; i<n; i++)
    {
        c=a+b;
        printf ("%d \n",c);
        a=b;
        b=c;
    }
}

// make fibonacci series without return and without perameter:-
