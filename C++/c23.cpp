#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int a=12,b=123,c=1234;
    
    cout<<setw(5)<<setfill('@')<<a<<endl;
    cout<<setw(5)<<setfill('&')<<b<<endl;
    cout<<setw(5)<<setfill('#')<<c<<endl;

    return 0;
}

// isomanip is used for the in built function like this setw,setfill and setprecision:-