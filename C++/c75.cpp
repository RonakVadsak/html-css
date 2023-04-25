#include<iostream>
#include<string.h>
using namespace std;
class person
{
    public:
    int code;
    char name [30];
    void get()
    {
        cout<<"name=";
        cin>>name;
        cout<<"code=";
        cin>>code;
    }
};
class account:virtual public person
{
    public:
    int salary;
    void intformation()
    {
        cout<<"salary=";
        cin>>salary;
    }

};
class admin:virtual public person
{
    public:
    int eyaer;
    void experience()
    {
        cout<<"expericen=";
        cin>>eyaer;
    }
};
class information:public account, public admin
{
    public:
    void display()
    {
        cout<<"============="<<endl;
        cout<<"name="<<name<<endl;
        cout<<"code="<<code<<endl;
        cout<<"salary="<<salary<<endl;
        cout<<"experience="<<eyaer<<endl;
    }
};
int main()
{
    information i;
    i.get();
    i.intformation();
    i.experience();
    i.display();

    return 0;
}