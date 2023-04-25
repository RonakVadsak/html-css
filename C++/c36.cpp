#include<iostream>
using namespace std;
int volume(int l, int b)
{
    int rectangle;
    rectangle=l*b;
    return rectangle;
}
int volume(float r, float pi=3.14, float r)
{
    int circle;
    circle=3.14*r*r;
    return circle;
    
}
int volume(int l)
{
    int square;
    square=l*l*l*l;
    return square;
}
int volume(int l, float b)
{
    int triagle;
    triagle=(l*b)/2;
    return triagle;
}
int main()
{
    int l,r,a,c,d,e;
    float b;

    cout<<"l=";
    cin>>l;
    cout<<"b=";
    cin>>b;
    cout<<"r=";
    cin>>r;

    a=rectangle(l,b);
    cout<<"rectangle="<<a<<endl;

    c=circle(r);
    cout<<"circle="<<c<<endl;

    d=square(l);
    cout<<"square="<<d<<endl;

    e=triangle(l,b);
    cout<<"triangle="<<e<<endl;

    return 0;
}