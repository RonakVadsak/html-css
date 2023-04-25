#include <iostream>
#include <iomanip>
using namespace std;
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

    cout<<setw(5)<<setfill('-')<<a<<endl;
    cout<<setw(5)<<setfill('-')<<b<<endl;
    cout<<setw(5)<<setprecision(3)<<c<<endl;


    
    return 0;
}