#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    int basic,allowance,total;

    cout<<"basic=";
    cin>>basic;

    cout<<"allowance=";
    cin>>allowance;

    total=basic+allowance;

    cout<<setw(10)<<setfill('*')<<"basic"<<setw(10)<<setfill('*')<<basic<<endl;
    cout<<setw(10)<<setfill('#')<<"allowance"<<setw(10)<<setfill('#')<<allowance<<endl;
    cout<<setw(10)<<setfill('+')<<"total"<<setw(10)<<setfill('+')<<total<<endl;

    return 0;
}