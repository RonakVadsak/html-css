#include<iostream>
using namespace std;
class dis;
class lenght
{
    public:
    int meter;
    void get()
    {
        cout<<"meter=";
        cin>>meter;
    }
    friend void put(lenght l1, dis d1);
};
class dis
{
    public:
    int meter;
    void get()
    {
        cout<<"meter=";
        cin>>meter;
    }
    friend void put(lenght l1, dis d1);
};
void put(lenght l1, dis d1)
{
    int meter1,km;

    meter1=l1.meter+d1.meter;
    km=meter1/1000;
    meter1=meter1%1000;

    cout<<"km="<<km<<endl;
    cout<<"meter="<<meter1<<endl;
}
int main ()
{
    lenght s;
    dis s1;
    s.get();
    s1.get();
    put(s,s1);
    return 0;
}