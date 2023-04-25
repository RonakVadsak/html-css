#include <iostream>
using namespace std;
class A
{
    public:
    int l,b,rec;
    void get()
    {
        cout<<"l=";
        cin>>l;
        cout<<"b=";
        cin>>b;
    }
    void calculate()
    {
        rec=l*b;
    }
    
};
class B:public A
{
    public:
    void put()
    {
        cout<<"rec="<<rec;
    }
};
int main()
{

    B e;
    e.get();
    e.calculate();
    e.put();

    return 0;
}