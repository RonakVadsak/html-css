#include <iostream>
#include <string.h>
using namespace std;
class Item
{
    public:
    int itemno;
    char itemname[300];
    void get()
    {
        cout<<"item no  =";
        cin>>itemno;
        cout<<"item name=";
        cin>>itemname;
    }
};
class itemin
{
    public:
    int price,quantity;
    void calculate()
    {
        cout<<"price    =";
        cin>>price;
        cout<<"quatity  =";
        cin>>quantity;
    }
};
class amount:public Item,public itemin
{
    public:
    int total;
    void put()
    {
        total=price*quantity;

        cout<<"total    ="<<total<<endl;

    }
};
int main ()
{
    amount z;
    z.get();
    z.calculate();
    z.put();
    return 0;
}