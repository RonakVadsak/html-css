#include <iostream>
using namespace std;
class A
{
    public:
    int a,b,sum;
    void get()
    {
        cout<<"a=";
        cin>>a;
        cout<<"b=";
        cin>>b;
    }
    void calculate()
    {
        sum=a+b;
    }
};
class B:public A
{
    public:
    void put()
    {
        cout<<"SUM="<<sum;
    }
};
int main()
{
    

    B d;
    d.get();
    d.calculate();
    d.put();
}