#include <stdio.h>
int sum();
int mul();
int divide();
int subtraction();
int main() 
{
    int c;

    c=sum();
    printf("sum=%d \n",c);

    c=mul();
    printf("mul=%d \n",c);

    c=divide();
    printf("divide=%d \n",c);

    c=subtraction();
    printf("subtraction=%d \n",c);

    return 0;
}

int sum()
{
    int a,b,c;
    printf("a=");
    scanf("%d",&a);

    printf("b=");
    scanf("%d",&b);
    
    c=a+b;
    return c;
}
int mul()
{
    int a,b,c;
    printf("a=");
    scanf("%d",&a);

    printf("b=");
    scanf("%d",&b);

    c=a*b;
    return c;
}
int divide()
{
    int a,b,c;
    printf("a=");
    scanf("%d",&a);

    printf("b=");
    scanf("%d",&b);

    c=a/b;
    return c;
}
int subtraction()
{
    int a,b,c;
    printf("a=");
    scanf("%d",&a);

    printf("b=");
    scanf("%d",&b);

    c=a-b;
    return c;
}

//with return and without perameter:-