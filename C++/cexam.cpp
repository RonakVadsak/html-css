#include <iostream>
using namespace std;
class CLOCK
{
    public:
    int hour,minute,second;
    void get()
    {
        cout<<"hour=";
        cin>>hour;
        cout<<"minute=";
        cin>>minute;
        cout<<"second=";
        cin>>second;
    }
    void put()
    {
        cout<<"hour="<<hour<<endl;
        cout<<"minute="<<minute<<endl;
        cout<<"second="<<second<<endl;
    }
    void convert (CLOCK s1,CLOCK s2)
    {
        hour=s1.hour+s2.hour;
        minute=s1.minute+s2.minute;
        hour=hour+(minute/60);
        minute=minute%60;
        second=s1.second+s2.second;
        minute=minute+(second/60);
        second=second%60;
    }
};
int main()
{
    CLOCK s1,s2,s3;
    s1.get();
    s2.get();
    s3.convert(s1,s2);
    s3.put();

    return 0;
}