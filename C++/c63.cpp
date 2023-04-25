#include <iostream>
using namespace std;
class dis
{
    public:
    int inch,feet;
    void get()
    {
        cout<<"feet=";
        cin>>feet;
        cout<<"inch=";
        cin>>inch;
    }
    void put()
    {
        cout<<"==============="<<endl;
        cout<<"feet="<<feet<<endl;
        cout<<"inch="<<inch<<endl;
    }
    void convert(dis d1,dis d2)
    {
        feet=d1.feet+d2.feet;
        inch=d1.inch+d2.inch;
        feet=feet+(inch/12);
        inch=inch%12;
        
    }
};
int main ()
{
    dis t1,t2,t3;
    t1.get();
    t2.get();
    t3.convert(t1,t2);
    t3.put();
    return 0;
}