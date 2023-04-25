#include <iostream>
using namespace std;
int main ()
{
    int n,q,n1,r;

    cout<<"n=";
    cin>>n;

    cout<<"n1=";
    cin>>n1;

    q=n/n1;
    r=n%n1;

    cout<<q<<"\n";
    cout<<r<<"\n";

    return 0;

}