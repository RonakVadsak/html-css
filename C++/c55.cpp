#include<iostream>
using namespace std;
class math 
{
    public:
    int a,b;

    void get ()
    {
        cout<<"a=";
        cin>>a;
        cout<<"b=";
        cin>>b;
    }
    friend void formula (math m);
};
void formula (math m)
{
    int average;
    average=(m.a+m.b)/2;
    cout<<"average="<<average<<endl;
}
int main ()
{
    math s;
    s.get();
    formula(s);
    return 0;
}