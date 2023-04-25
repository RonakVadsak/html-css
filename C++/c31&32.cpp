#include <iostream>
using namespace std;
inline int mul(int a, int b)
{
    return a*b;
}

int main ()
{
    int a,b,c;

    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;

    c=mul(a,b);
    cout<<c;

    return 0;

}