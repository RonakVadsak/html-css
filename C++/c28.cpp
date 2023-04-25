#include<iostream>
#include <iomanip>
using namespace std;
void sum (int n)
{
    int r,s=0;
    while (n>0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    cout<<"sum="<<s;
}
int main ()
{
    int n;

    cout<<"n=";
    cin>>n;

    sum(n);
    return 0;
}

