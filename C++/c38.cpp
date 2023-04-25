#include <iostream>
#include <math.h>
using namespace std; 
void power (int a)
{
    cout<<"square="<<a*a<<endl;
}
void power (double b)
{
    int cube;
    cube=b*b*b;
    cout<<"cube="<<cube<<"\n";
}
void power (int m, int n)
{
    int i,c=1;
    for(i=1; i<=n; i++)
    {
        c=c*m;
    }
    cout<<"power="<<c<<endl;
} 
int main()
{
    int n,m,a;
    double b;

    cout<<"a=";
    cin>>a;
    power(a);

    cout<<"b=";
    cin>>b;
    power(b);

    cout<<"m=";
    cin>>m;
    cout<<"n=";
    cin>>n;
    power(m,n);

    return 0;
    
}
