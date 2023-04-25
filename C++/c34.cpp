#include <iostream>
using namespace std;
float interest (int p, int y, float r=2.5)
{
    
    return (p*y*r)/100;

}
int main ()
{
    int p,y;
    float d;

    cout<<"p=";
    cin>>p;
    cout<<"y=";
    cin>>y;

    d=interest(p,y);
    cout<<"interest="<<d;

    return 0;

}