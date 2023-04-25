#include <iostream>
using namespace std;
int main ()
{
    int a,b,max,min;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;

    max=(a>b)?a:b;
    cout<<"max="<<max<<endl;

    min=(a<b)?a:b;
    cout<<"min="<<min;

    return 0;
}

//:this is for comparison
//? this is use like if else 