#include <stdio.h>
void sum();
void mul();
void devide(); 
void subtraction();
int main()
{
    sum();
    mul();
    devide();
    subtraction();
    return 0;
}
void sum()
{
    int a,b,c;

    printf("a=");
    scanf("%d",&a);

    printf("b=");
    scanf("%d",&b);

    c=a+b;
    printf("sum=%d \n",c);

}
void mul()
{
    int a,b,c;

    printf("a=");
    scanf("%d",&a);

    printf("b=");
    scanf("%d",&b);

    c=a*b;
    printf("mul=%d \n",c);
}
void devide()
{
    int a,b,c;

    printf("a=");
    scanf("%d",&a);

    printf("b=");
    scanf("%d",&b);

    c=a/b;
    printf ("devide=%d \n",c);
}
void subtraction ()
{
    int a,b,c;

    printf("a=");
    scanf("%d",&a);

    printf("b=");
    scanf("%d",&b);

    c=a-b;
    printf ("subtraction=%d \n",c);
}



//without return and without perameter:-
