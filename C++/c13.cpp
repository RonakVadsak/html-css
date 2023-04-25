#include<iostream>
using namespace std;
int main ()
{
    int year,day,week,n;

    cout<<"n=";
    cin>>n;

    year=n/365;
    day=n/30;
    week=n/7;

    cout<<year<<"\n";
    cout<<day<<"\n";
    cout<<week<<"\n";

    return 0;

}