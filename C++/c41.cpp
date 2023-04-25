#include<iostream>
#include<string.h>
using namespace std;
class student
{
    public:
    char studentname[10],course[10];
    int enrollment,total1,s1,s2,s3,per;

    void getdata ()
    {
        cout<<"studentname = ";
        cin>>studentname;

        cout<<"course      = ";
        cin>>course;

        cout<<"enrollment  = ";
        cin>>enrollment;
   
        cout<<"s1          = ";
        cin>>s1;

        cout<<"s2          = ";
        cin>>s2;
        
        cout<<"s3          = ";
        cin>>s3;
    }
    void total()
    {
        total1=s1+s2+s3;
        per=total1/3;
    }
    void putdata()
    {
        cout<<"-------------------"<<endl;
        cout<<"total       = "<<total1<<endl;
        cout<<"per         = "<<per<<endl;
        cout<<"-------------------"<<endl;
    }
}; 
int main ()
{
    student s;
    s.getdata();
    s.total();
    s.putdata();

    return 0;
}