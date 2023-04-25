# include <stdio.h>
int balance ();
int  deposite (int c);
int withdraw (int d);
int main ()
{
    int c,d,e;

    c=balance();
    printf("%d \n",c);

    d=deposite(c);
    printf("after deposite balance=%d \n",d);
    
    e=withdraw(d);
    printf("total=%d \n",e);

    return 0;

}
int balance()
{
    int balance;
    printf ("balance=");
    scanf ("%d",&balance);
    return balance;
}
int deposite(int c)
{    
    int deposite,depositebalance;
    printf("deposite=");
    scanf("%d",&deposite);

    depositebalance= c+deposite;
    return depositebalance;
}
int withdraw(int d)
{
    int withdraw,total;
    printf("withdraw=");
    scanf("%d",&withdraw);

    total=d-withdraw;
    return total;
}

// with return and perameter of ATM:-