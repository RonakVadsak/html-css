#include <iostream>
using namespace std;
class A
{
    public:
    int p,r,n,interest;
    void get()
    {
        cout<<"p=";
        cin>>p;
        cout<<"r=";
        cin>>r;
        cout<<"n=";
        cin>>n;
    }
};
class B:public A
{
    public:
    void put()
    {
        interest=p*r*n;
        cout<<"interest="<<interest;
    }
};
int main ()
{
    B z;
    z.get();
    z.put();

    return 0;
}