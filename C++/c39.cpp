#include <iostream>
#include <string.h>
using namespace std;
void sum(int a, int b)
{
    int sum;
    sum=a+b;
    cout<<"sum="<<sum<<endl;
}
void sum(char c[10], char d[10])
{
    strcat(c,d);
    cout<<"string="<<c;
    cout<<"string="<<d;
}
int main()
{
    int a,b;
    char c[10],d[10];

    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"c=";
    fgets(c,sizeof(c),stdin);
    cout<<"d=";
    fgets(d,sizeof(d),stdin);
    cout<<"\n";
    sum(a,b);
    cout<<endl;
    sum(c,d);
    return 0;
}