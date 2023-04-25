#include <iostream>
#include <iomanip>
using namespace std;
void add(int &a, int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
}

int main ()
{
    int a,b,c;

    cout<<"a=";
    cin>>a;

    cout<<"b=";
    cin>>b;

    add(a,b);

    cout<<"a="<<a<<endl<<"b="<<b;
    
    return 0;
}

//& this is use for reference in the custome function:-