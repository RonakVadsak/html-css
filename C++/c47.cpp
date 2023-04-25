#include <iostream>
using namespace std;
class hour 
{
    public:
    int hour,minutes,seconds;

    void get()
    {
        cout<<"hour=";
        cin>>hour;
    }
    void convert()
    {
        minutes=hour*60;
        seconds=minutes*60;
    }
    void put()
    {
        cout<<"minutes="<<minutes<<endl;
        cout<<"seconds="<<seconds<<endl;
    }

};
int main ()
{
    hour h;
    h.get();
    h.convert();
    h.put();

    return 0;
}