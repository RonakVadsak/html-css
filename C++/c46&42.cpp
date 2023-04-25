#include <iostream>
using namespace std;
class math 
{
    public:
    int inch, feet, inch1, feet1;

    void get()
    {
        cout<<"inch=";
        cin>>inch;
        cout<<"feet1=";
        cin>>feet1;
    }
    void convert()
    {
        feet=inch/12;
        inch=feet1*12;
    }
    void put()
    {
        cout<<"feet ="<<feet<<endl;
        cout<<"inch ="<<inch<<endl;
    }
};
int main ()
{
    math m;
    m.get();
    m.convert();
    m.put();

    return 0;
}