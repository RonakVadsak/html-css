#include<iostream>
using namespace std;
class DB;
class DM
{
    public:
    float meter, cm;
    void get()
    {
        cout<<"meter=";
        cin>>meter;
        cout<<"cm=";
        cin>>cm;
    }
    friend void put(DM m, DB b);
};
class DB
{
    public:
    float inch, feet;
    void get()
    {
        cout<<"inch=";
        cin>>inch;
        cout<<"feet=";
        cin>>feet;
    }
    friend void put(DM m, DB b);
};
void put(DM m, DB b)
{
    float meter1, cm1;
    meter1=m.meter+(b.feet/3.28);
    cm1=m.cm+(b.inch*2.54);

    cout<<"---------------"<<endl;
    cout<<"meter1="<<meter1<<endl;
    cout<<"cm1="<<cm1<<endl;
}
int main ()
{
    DM s;
    DB s1;
    s.get();
    s1.get();
    put(s,s1);
    return 0;
}