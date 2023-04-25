#include<iostream>
using namespace std;
void volume (int c)
{
    cout<<c*c*c<<endl;
}
void volume(int r, int n, const float pi=3.14)
{
    cout<<pi*(r*r)*n<<"\n";
}
void volume(int l, int b, int h)
{
    cout<<l*b*h<<endl;
}
int main()
{
    int c,r,n,l,b,h;

    cout<<"c=";
    cin>>c;
    volume(c);

    cout<<"r=";
    cin>>r;
    cout<<"n=";
    cin>>n;
    volume(r,n);

    cout<<"l=";
    cin>>l;
    cout<<"b=";
    cin>>b;
    cout<<"h=";
    cin>>h;
    volume(l,b,h);

    return 0;
}