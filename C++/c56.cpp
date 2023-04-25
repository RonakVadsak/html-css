#include <iostream>
using namespace std;
class B;// this is second class for decleration and link we have to put semi coloum
class A
{
    public:
    int a;

    void get()
    {
        cout<<"a=";
        cin>>a;
    }
    friend void put (A h1, B h2);
};
class B
{
    public:
    int b;
    void get ()
    {
        cout<<"b=";
        cin>>b;
    }
    friend void put (A h1, B h2);
};
void put (A h1, B h2)
{
    if (h1.a<h2.b)
    {
        cout<<"b is max"<<endl<<h2.b<<endl;
    }
    else 
    {
        cout<<"a is max"<<endl<<h1.a<<endl;
    }
}
int main ()
{
    A s;
    B s1;
    s.get();
    s1.get();
    put(s,s1);

    return 0;
}