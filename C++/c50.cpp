#include <iostream>
#include <string.h>
using namespace std;
class market
{
    public:
    int itemno,price;
    char name[50];
    void get();

    void put()
    {
        cout<<"---------------"<<endl;
        cout<<"itemno="<<itemno<<endl;
        cout<<"name  ="<<name<<endl;
        cout<<"price ="<<price<<endl;
    }
};
void market::get()
{
    cout<<"itemno=";
    cin>>itemno;
    cout<<"name=";
    cin>>name;
    cout<<"price=";
    cin>>price;
}
int main ()
{
    market m;
    m.get();
    m.put();

    return 0;
}