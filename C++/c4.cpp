#include <iostream>
using namespace std;
int main ()
{
    int i,n,a,j,f;

    cout << "n=";
    cin >> n;

    for (i=0; i<n; i++)
    {
        for (j=2; j<i; j++)
        {
            f=0;
            if (i%j==0)
            {
                f++;
                break;
            }
        }
        if (f==0)
        {
            cout << i << "\n";
        }
    }
return 0;

}