#include<iostream>
#include<string.h>
using namespace std;
class account 
{
    public:
    int ac,bal;
    char name[30];
    void get()
    {
        cout<<"Name=";
        cin>>name;
        cout<<"Acoount no=";
        cin>>ac;
        cout<<"Balance=";
        cin>>bal;

    }
};
class with:public account
{
    public:
    int withdraw,w;
    void calculate()
    { 
        cout<<"withdraw=";
        cin>>withdraw;

        w=bal-withdraw;

        cout<<"After withdraw="<<w<<endl;
    }
};
class depo:public account
{
    public:
    int deposite,d;
    void put()
    {
        cout<<"deposite=";
        cin>>deposite;

        d=bal+deposite;

        cout<<"After deposite="<<d<<endl;;
    }
};
int main()
{
    with w;
    depo d;
    w.get();
    w.calculate();
    d.get();
    d.put();

    return 0;
}