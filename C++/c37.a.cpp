#include <iostream>
using namespace std;
void sum(int a, int b)
{
    cout<<a+b<<endl;
}
void sum(int a, float c)
{
    cout<<a+c<<endl;
}
int main ()
{
    int a,b;
    float c;

    cout<<"a=";
    cin>>a;

    cout<<"b=";
    cin>>b;

    cout<<"c=";
    cin>>c;

    sum(a,b);
    sum(a,c);
    return 0;
}