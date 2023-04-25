#include <iostream>
using namespace std;
inline int cube (int n)
{
    return n*n*n;
}

int main()
{
    int n,c;
    cout<<"n=";
    cin>>n;

    c=cube(n);

    cout <<c;
}