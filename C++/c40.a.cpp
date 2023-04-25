#include<iostream>
#include<string.h>
using namespace std;
class student
{
    public:// this is data hiding and always use that : 
    char name[10];
    int rollno;

    void getdata()// this is function 
    {
        cout<<"rollno=";
        cin>>rollno;
        cout<<"name=";
        cin>>name;
    }
    void putdata()
    {
        cout<<"rollno="<<rollno<<endl;
        cout<<"name="<<name<<endl;
        cout<<"--------------------"<<endl;
    }

};//;this complusary after class
int main()
{
    student s,s1;// this is class decleration
    s.getdata();
    s.putdata();
    s1.getdata();
    s1.putdata();
    return 0;

}