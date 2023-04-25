#include <iostream>
using namespace std;
class TIME
{
    public:
    int hour,minutes,second;
    void get()
    {
        cout<<"hour=";
        cin>>hour;
        cout<<"minutes=";
        cin>>minutes;
        cout<<"second=";
        cin>>second;
    }
    void put()
    {
        cout<<"---------------"<<endl;
        cout<<"hour   ="<<hour<<endl;
        cout<<"minutes="<<minutes<<endl;
        cout<<"second ="<<second<<endl;
    }
    void convert(TIME t1,TIME t2)
    {
        hour=t1.hour+t2.hour;
        minutes=t1.minutes+t2.minutes;
        hour=hour+(minutes/60);
        minutes=minutes%60;
        second=t1.second+t2.second;
        minutes=minutes+(second/60);
        second=second%60;
    }
};
int main ()
{
    TIME t1,t2,t3;
    t1.get();
    t2.get();
    t3.convert(t1,t2);
    t3.put();
    return 0;
}