#include <iostream>
using namespace std;
int main ()
{
    int i,n,a=1;

    cout << "n=";
    cin >> n;

    for (i=n; i>0; i--)
    {
        a=a*i;
        cout << a << "\n";
    }
    return 0;
}

//factorial 