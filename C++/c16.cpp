#include <iostream>
using namespace std;
int main ()
{
    int english,hindi,sci,total,percentage;

    cout<<"english=";
    cin>>english;

    cout<<"hindi=";
    cin>>hindi;

    cout<<"sci=";
    cin>>sci;

    total=english+hindi+sci;

    percentage=total/3;

    cout<<"total="<<total<<"\n"<<"percentage="<<percentage<<"\n";

    return 0;
}