#include <stdio.h>
int withdraw(int amount, int b);
int deposit (int D, int d);
int main ()
{
    int n,amount,D,b,c,d;

    printf ("1.check balance= \n");
    printf ("2.withdraw= \n");
    printf ("3.deposit= \n");
    
    printf ("Enter amount=");
    scanf ("%d",&amount);

    printf("Enter choice=");
    scanf("%d",&n);
    
    D=amount;
    switch (n)
    {
        case 1:
        {
            printf ("check balance=%d",amount);
        }
        break;
        case 2:
        {
            printf ("withdraw=");
            scanf("%d",&b);
            c=withdraw (amount,b);
            printf("withdraw balance=%d",c);
        }
        break;
        case 3:
        {
            printf("deposit=");
            scanf ("%d",&d);
            d= deposit (D,d);
            printf("deposite balance=%d",d);
        }
        break;
        default:
        {
            printf ("There are no other option");
        }
    }
    return 0;
}
int withdraw (int amount, int b)
{
    int c;
    c=amount-b;
    return c;
}  
int deposit (int D, int d)
{
    d=D+d;
    return d;
}





