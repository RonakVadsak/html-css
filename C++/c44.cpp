#include<iostream>
using namespace std;
class math
{
    public:
    int sum,sub,mul,div,a,b;

    void getdata()
    {
        cout<<"a=";
        cin>>a;
        cout<<"b=";
        cin>>b;
    }
    void mathematic()
    {
        sum=a+b;
        sub=a-b;
        mul=a*b;
        div=a/b;
    }
    void display()
    {
        cout<<"sum="<<sum<<endl;
        cout<<"sub="<<sub<<"\n";
        cout<<"mul="<<mul<<endl;
        cout<<"div="<<div<<endl;
    }

};
int main ()
{
    math m;
    m.getdata();
    m.mathematic();
    m.display();

    return 0;
}