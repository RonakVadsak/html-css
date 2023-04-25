#include <stdio.h>
void sum ();
void mul ();
void divide ();
void subtraction ();
int main ()
{
    int a,b;
    printf ("a=");
    scanf ("%d",&a);

    printf ("b=");
    scanf("%d",&b);

    sum (a,b);
    mul (a,b);
    divide (a,b);
    subtraction (a,b);

    return 0;
}
void sum (int a, int b)
{
    int sum;
    sum=a+b;
    printf("sum=%d \n",sum);

}
void mul (int a, int b)
{
    int mul;
    mul=a*b;
    printf ("mul=%d \n",mul);
}
void divide (int a,int b)
{
    int divide;
    divide=a/b;
    printf("divide=%d \n",divide);
}
void subtraction (int a, int b)
{
    int subtraction;
    subtraction=a-b;
    printf ("subtraction=%d \n",subtraction);
}



//without return and with perameter:-