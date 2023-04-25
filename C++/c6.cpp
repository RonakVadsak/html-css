#include <iostream>
using namespace std;
int main ()
{
    int n,a,b,c,sum;

    cout << "n=";
    cin >> n; 

    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;

    sum=a+b+c;
    cout<<sum;
    return 0;
}