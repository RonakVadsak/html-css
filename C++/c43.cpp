#include<iostream>
#include<string.h>
using namespace std;
class emp
{
    public:
    char name[10];
    int id,dept;

    void getdata()
    {
        cout<<"name=";
        cin>>name;
        cout<<"id=";
        cin>>id;
        cout<<"dept=";
        cin>>dept;
    }
    void putdata()
    {
        cout<<"-------------------"<<endl;
        cout<<"name="<<name<<endl;
        cout<<"id="<<id<<endl;
        cout<<"dept="<<dept<<endl;
        cout<<"-------------------"<<endl;
    }
};
int main ()
{
    emp e[100];
    int i,n;

    cout<<"n=";
    cin>>n;

    for (i=0; i<n; i++)
    {
        e[i].getdata();

    }
    for(i=0; i<n; i++)
    {
        e[i].putdata();
    }
}