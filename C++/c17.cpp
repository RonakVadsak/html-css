#include<iostream>
using namespace std;
int main ()
{
    int n,a[100][100],b[100][100],c[100][100],j,i;

    cout<<"n=";
    cin>>n;

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]";
            cin>>a[i][j];
        }
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            cout<<"b["<<i<<"]["<<j<<"]";
            cin>>b[i][j];
        }
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            cout<<" "<<c[i][j];
            
        }
        cout<<"\n";
    }
    
    return 0;

}