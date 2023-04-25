#include <iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cout<<"a=";
    cin>>a;

    cout<<"b=";
    cin>>b;

        c=a;
        a=b;
        b=c;

        cout<<"a="<<a;
        cout<<"b="<<b;

    return 0;
}