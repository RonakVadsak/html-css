#include<stdio.h>
int sum (int a, int b);
int mul (int a, int b);
int divide (int a, int b);
int subtraction (int a, int b);
int main ()
{
    int c,a,b;
    printf ("a=");
    scanf("%d",&a);

    printf ("b=");
    scanf("%d",&b);

    c=sum(a,b);
        printf ("sum=%d \n",c);
    c=mul (a,b);
        printf ("mul=%d \n",c);
    c=divide (a,b);
        printf ("divide=%d \n",c);
    c=subtraction (a,b);
        printf ("subtraction=%d \n",c);
    
    return 0;
}
int sum (int a, int b)
{
    int c;
    c=a+b;
    return c;
}
int mul (int a, int b)
{
    int c;
    c=a*b;
    return c;
}
int divide (int a, int b)
{
    int c;
    c=a/b;
    return c;
}
int subtraction (int a, int b)
{
    int c;
    c=a-b;
    return c;
}

//With perameter and with return :-