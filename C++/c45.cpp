#include <iostream>
using namespace std;
class temperture
{
    public:
    float c,f,c1,f1;
    void getdata()
    {
        cout<<"f=";
        cin>>f;
        cout<<"c1=";
        cin>>c1;

    }
    void convert()
    {
        c=(f-32)*5/9;
        f=(c1*9/5)+32;

    }
    void putdata()
    {
        cout<<"celsius="<<c<<endl;
        cout<<"fahrenheit="<<f<<endl;

    }
};
int main ()
{
    temperture t;
    t.getdata();
    t.convert();
    t.putdata();
    
    return 0;
}