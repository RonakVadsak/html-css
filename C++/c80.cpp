#include<iostream>
using namespace std;
class TIME
{
    public:
    int a,b,c;
    void get (int hr, int mi, int sec)
    {
        a=hr;
        b=mi;
        c=sec;
    }
    void put()
    {
        cout<<"hour="<<a<<endl;
        cout<<"min ="<<b<<endl;
        cout<<"sec ="<<c<<endl;
    }
    TIME operator +(TIME t1);
};
TIME TIME::operator +(TIME t1)
{
    TIME t;

    t.a=a+t1.a;
    t.b=b+t1.b;
    t.c=c+t1.c;
    t.b=t.b+(t.c/60);
    t.c=t.c%60;
    t.a=t.a+(t.b/60);
    t.b=t.b%60;
    return t;
}
int main ()
{
    TIME t1,t2,t3;
    t1.get(1,60,70);
    t1.put();
    t2.get(1,60,71);
    t2.put();
    t3=t1+t2;
    t3.put();

    return 0;
}