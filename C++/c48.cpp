#include<iostream>
#include<string.h>
using namespace std;
class hotel 
{
    public:
    char name[10];
    int rno, charge, day, total,date;

    void get()
    {
        cout<<"name=";
        cin>>name;
        cout<<"rno=";
        cin>>rno;
        cout<<"charge=";
        cin>>charge;
        cout<<"day=";
        cin>>day;
    }
    void calculate()
    {
        total=charge*day;
    }
    void put()
    {
        cout<<"-------------------"<<endl;
        cout<<"     Raj hotel     "<<endl;
        cout<<"-------------------"<<endl;
        cout<<"date:-1/12/22"<<endl;
        cout<<"-------------------"<<endl;
        cout<<"name  ="<<name<<endl;
        cout<<"charge="<<charge<<endl;
        cout<<"day   ="<<day<<endl;
        cout<<"-------------------"<<endl;
        cout<<"-------------------"<<endl;
        cout<<"total ="<<total<<endl;
        cout<<"-------------------"<<endl;
    }
};
int main ()
{
    hotel h;
    h.get();
    h.calculate();
    h.put();

    return 0;

}