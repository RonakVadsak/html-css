#include <iostream>
using namespace std;
int a=20; //this is global decleration
int main ()
{
    int a=10; //this is local decleration
    {
        cout<<"local="<<a<<endl<<"global="<<::a;
    }
    return 0;
}