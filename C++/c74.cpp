#include <iostream>
#include <string.h>
using namespace std;
class Emp
{
    public:
    int salary;
    char name [100];
    void get()
    {
        cout<<"Name=";
        fgets(name,sizeof(name),stdin);
        cout<<"salary=";
        cin>>salary;
            
    }
};
class Allowance:public Emp
{
    public:
    int DA,HRA,RA,gsalary;
    void calculate()
    {
        DA=salary*0.40;
        HRA=salary*0.20;
        RA=salary*0.10;
        gsalary=salary+DA+HRA+RA;
    }
};
class total:public Allowance
{
    public:
    void put()
    {
        cout<<"DA ="<<DA<<endl;
        cout<<"HRA="<<HRA<<endl;
        cout<<"RA ="<<RA<<endl;
        cout<<"Gross salary="<<gsalary<<endl;
    }
};
int main ()
{
    total r;
    r.get();
    r.calculate();
    r.put();

    return 0;
}