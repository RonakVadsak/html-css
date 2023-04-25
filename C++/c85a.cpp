#include <iostream>
using namespace std;
class ABC
{
    public:
    int a;
    void get(int x)
    {
        a=x;
    }
    void display()
    {
        cout<<"a="<<a<<endl;
    }
};
int main ()
{
    ABC a;
    a.get(10);
    a.display();
    ABC *p;
    p=&a;
    p->get(20);
    p->display();
    return 0;

}

//in c++ pointer called address of object while in c pointer called adress of variable
//we can initialize pointer with object of class