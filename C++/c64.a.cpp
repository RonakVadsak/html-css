#include<iostream>
using namespace std;
class ABC
{

    int a,b;
    public:
    ABC()// simple constructor
    {
        a=10;
        cout<<a<<endl;
        b=20;
        cout<<b<<endl;
    }
    ABC(int a1, int b1)// perameterise constructor
    {
        a=a1;
        cout<<a<<endl;
        b=b1;
        cout<<b<<endl;
    }
    ABC(ABC &r)// this is copy constructor and always use reference & so variale get proper value 
    {
        a=r.a;
        cout<<a<<endl;
        b=r.b;
        cout<<b<<endl;
    }
};
int main ()
{
    ABC d;
    ABC d1;
    ABC d2(d1);
    return 0;
}
// constructor initialized by object of class