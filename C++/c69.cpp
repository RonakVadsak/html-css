#include<iostream>
#include<string.h>
using namespace std;
class student
{
    public:
    int rollno;
    char name[100];
    void get()
    {
        cout<<"NAME=";
        fgets(name,sizeof(name),stdin);
        cout<<"Roll no=";
        cin>>rollno;
        
    }
};
class subject:public student
{
    public:
    int s1,s2,s3,total;
    void calculate()
    {
        cout<<"Science=";
        cin>>s1;
        cout<<"social science=";
        cin>>s2;
        cout<<"math=";
        cin>>s3;
        cout<<"==============="<<endl;
        total=s1+s2+s3;
        cout<<"TOTAL="<<total<<endl;
    }
};
class result:public subject 
{
    public:
    int per;
    void put()
    {
        per=total/3;
        cout<<"==============="<<endl;
        cout<<"Percentage="<<per<<endl;

    }

};
int main ()
{
    result a;
    a.get();
    a.calculate();
    a.put();

    return 0;
}
