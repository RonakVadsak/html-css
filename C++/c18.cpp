#include<iostream>
#include <math.h>
using namespace std;
int main ()
{
    int n,m,power;

    cout<<"m=";
    cin>>m;

    cout<<"n=";
    cin>>n;
    
    power=pow(m,n);

    cout<<power;

    return 0;
}