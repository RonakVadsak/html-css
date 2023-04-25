#include<iostream>
using namespace std;
class swaping 
{
    public:
    int a,b;
    void get()
    {
        cout<<"a=";
        cin>>a;
        cout<<"b=";
        cin>>b;
    }
    friend void put(swaping d);
};
void put(swaping d)
{
    d.b=d.a+d.b;
    d.a=d.b-d.a;
    d.b=d.b-d.a;

    cout<<"a="<<d.a<<endl;
    cout<<"b="<<d.b<<endl;
}
int main ()
{
    swaping s;
    s.get();
    put(s);
    return 0;
}