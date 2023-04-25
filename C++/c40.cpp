#include<iostream>
#include<string.h>
using namespace std;
class emp
{
    public:
    char name[10],depart[10];
    int empno,salary;

    void getdata()
    {
        cout<<"empno=";
        cin>>empno;
    
        cout<<"name=";
        cin>>name;
    
        cout<<"depart=";
        cin>>depart;
    
        cout<<"salary=";
        cin>>salary;
    }
    void putdata()
    {
        cout<<"-----------------"<<endl;
        cout<<"empno="<<empno<<endl;
        cout<<"name="<<name<<endl;
        cout<<"depart="<<depart<<endl;
        cout<<"salary="<<salary<<endl;
        cout<<"-----------------"<<endl;
    }
};
int main()
{
    emp e,e1;
    e.getdata();
    e.putdata();
    e1.getdata();
    e1.putdata();

    return 0;
}
