#include <iostream>
#include <string.h>
using namespace std;
class item
{
    public:
    char name[100];
    int code,price;

    void get()
    {
        cout<<"name=";
        fgets(name,sizeof(name),stdin);
        cout<<"code=";
        cin>>code;
        cout<<"price=";
        cin>>price;

    }
    void put()
    {
        cout<<"==================="<<endl;
        cout<<"name ="<<name;
        cout<<"code ="<<code<<endl;
        cout<<"price="<<price<<endl;
    }
};
int main ()
{
    item i; // class of object
    item *p; // object of pointer
    p=&i;
    p->get();
    p->put();
    return 0;
}