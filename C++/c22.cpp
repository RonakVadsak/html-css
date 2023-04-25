#include <iostream>
using namespace std;
int a=20; //this is global decleration
int main ()
{
    int b=10; //this is local decleration
    {
        cout<<"sum="<<::a+b<<endl<<"sub="<<::a-b<<endl<<"mul="<<::a*b<<"\n"<<"div="<<::a/b;
    }
    return 0;
}