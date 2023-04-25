#include <iostream>
using namespace std;
float cir(int r, const float pi=3.14) //const is a keyword
{
    return pi*r*r;
}
int main ()
{
    int r;
    float d;
    cout<<"r=";
    cin>>r;
    d=cir(r);
    cout<<"circle="<<d;
    
    return 0;
}