#include<iostream>
using namespace std;
class DEF;
class ABC
{
    public:
    int inch,feet;
    void get()
    {
        cout<<"inch=";
        cin>>inch;
        
    }
    friend void put(ABC a, DEF b);

};
class DEF
{
    public:
    int inch;
    void get()
    {
        cout<<"inch=";
        cin>>inch;
    }
    friend void put(ABC a, DEF b);
};
void put(ABC a, DEF b)
{
    int feet,inch1;
    
    inch1=a.inch+b.inch;
    feet=inch1/12;
    inch1=inch1%12;

    cout<<"feet="<<feet<<endl;
    cout<<"inch="<<inch1<<endl;
}
int main ()
{
    ABC a;
    DEF b;
    a.get();
    b.get();
    put(a,b);
    return 0;
}