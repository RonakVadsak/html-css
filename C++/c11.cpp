#include <iostream>
using namespace std;
int main ()
{
    int a,b;

    cout<<"a=";
    cin>>a;

    cout<<"b=";
    cin>>b;

    
    b=a+b;
    a=b-a;
    b=b-a;

    cout<<"a="<<a<<"\n";
    cout<<"b="<<b<<"\n";

return 0;
}