#include <iostream>
#include <string.h>
using namespace std;
class student
{
    public:
    int age;
    char name [20];

    student ()
    {
        cout<<"name=";
        cin>>name;
        cout<<"age=";
        cin>>age;
    }
    student(student &r)
    {
        cout<<r.name<<endl;
        cout<<r.age<<endl;
    }

};
int main ()
{
    student t;
    student t1(t);
    return 0;
}