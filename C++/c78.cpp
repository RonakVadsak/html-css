#include <iostream>
using namespace std;
class base
{
    public:
    void display()
    {
        cout<<"simple function in base class"<<"\n";
    }
    virtual void show()
    {
        cout<<"virtual function in base class"<<endl;
    }
};
class derived:public base
{
    public:
    void display()
    {
        cout<<"same simple function in derived class"<<endl;
    }
    void show()
    {
        cout<<"same virtual function in derived class"<<endl;
    }
};
int main()
{
    base B;
    derived D;
    base *bptr;
    bptr=&B;
    bptr->display();
    bptr->show();

    bptr=&D;
    bptr->display();
    bptr->show();
    return 0;

}