#include <iostream>
#include <string.h>
using namespace std;
class emp 
{
    public:
    int empno,bsalary;
    char name[20];
    float da,hra,ra,gross;

    void get()
    {
        cout<<"name   =";
        cin>>name;
        cout<<"empno  =";
        cin>>empno;
        cout<<"bsalary=";
        cin>>bsalary;
        
    }
    void calculate()
    {
        da=bsalary*0.20;
        hra=bsalary*0.15;
        ra=bsalary*0.10;
    }
    void put ()
    {
        cout<<"---------------"<<endl;
        cout<<"name   ="<<name<<endl;
        cout<<"empno  ="<<empno<<endl;
        cout<<"---------------"<<endl;
        cout<<"bsalary="<<bsalary<<endl;
        cout<<"da     ="<<da<<endl;
        cout<<"hra    ="<<hra<<endl;
        cout<<"ra     ="<<ra<<endl;
        cout<<"---------------"<<endl;
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
        e[i].get();
    }
    for (i=0; i<n; i++)
    {
        e[i].calculate();
    }
    for (i=0; i<n; i++)
    {
        e[i].put();
    }
    return 0;
}