#include <iostream>
using namespace std;
class TIME;
class DATE
{
    public:
    int year,month,day;
    void get()
    {
        cout<<"day=";
        cin>>day;
    }
    friend void put (DATE d, TIME t);
};
class TIME
{
    public:
    int sec,min,hour;
    void get()
    {
        cout<<"sec=";
        cin>>sec;
    }
    friend void put (DATE d, TIME t);
};
void put(DATE d, TIME t)
{
    d.year=d.day/365;
    d.day=d.day%365;
    d.month=d.day/30;
    d.day=d.day%30;

    t.hour=t.sec/3600;
    t.sec=t.sec%3600;
    t.min=t.sec/60;
    t.sec=t.sec%60;

    cout<<"---------------"<<endl;
    cout<<"year="<<d.year<<endl;
    cout<<"month="<<d.month<<endl;
    cout<<"day="<<d.day<<"\n";
    cout<<"---------------"<<endl;
    cout<<"hour="<<t.hour<<endl;
    cout<<"min="<<t.min<<endl;
    cout<<"sec="<<t.sec<<endl;
    cout<<"---------------"<<endl;
}
int main()
{
    DATE s;
    TIME s1;
    s.get();
    s1.get();
    put(s,s1);
    return 0;
}