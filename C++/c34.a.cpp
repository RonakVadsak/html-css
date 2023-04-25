#include <iostream>
using namespace std;
void sum (int a, int b, int c=20)//this is default value
{
    int d;
    d= a+b+c;
    cout<<"sum="<<d;
}
int main ()
{
    int a,b,c;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    sum(a,b);// run time approach right to left so always put defualt first right to left

    return 0;

}
//firstly,variable always get user value if they do not have user value then get default value 