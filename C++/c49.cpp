#include<iostream>
#include <string.h>
using namespace std;
class student 
{
    public:
    int rollno,eng,guj,ss, mark [3], total;
    float per;
    char name[20];

    void get()
    {
        cout<<"rollno=";
        cin>>rollno;
        cout<<"name=";
        cin>>name;
        cout<<"eng=";
        cin>>eng;
        cout<<"guj=";
        cin>>guj;
        cout<<"ss=";
        cin>>ss;
    }
    void result()
    {
        total=eng+guj+ss;
        per=total/3;
    }
    void put()
    {
        cout<<"---------------"<<endl;
        cout<<"rollno="<<rollno<<endl;
        cout<<"name  ="<<name<<endl;
        cout<<"---------------"<<endl;
        cout<<"eng    ="<<eng<<endl;
        cout<<"guj    ="<<guj<<endl;
        cout<<"ss     ="<<ss<<endl;
        cout<<"---------------"<<endl;
        cout<<"total  ="<<total<<endl;
        cout<<"per    ="<<per<<endl;
        cout<<"---------------"<<endl;

    }
};
int main ()
{
    student s[20];
    int i,n;

    cout<<"n=";
    cin>>n;

    for (i=0; i<n; i++)
    {
        s[i].get();
    }
    for (i=0; i<n; i++)
    {
        s[i].result();
    }
    for (i=0; i<n; i++)
    {
        s[i].put();
    }
    return 0;


}