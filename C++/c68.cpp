#include <iostream>
using namespace std;
class A
{
    public:
    int x;
    void getx()
    {
        cout<<"x=";
        cin>>x;
      
    }
};
class B
{
    public:
    int y;
    void gety()
    {
        cout<<"y=";
        cin>>y;
    }
};
class c:public A, public B
{
    public:
    void put()
    {
        if (x>y)
        {
            cout<<"x is max="<<x;
        }
        else 
        {
            cout<<"y is max="<<y;
        }
    }
};
int main()
{
    c d;
    d.getx();
    d.gety();
    d.put();
    return 0;
}