#include<iostream>
using namespace std;
class shape
{
    public:
    float l,b,rec,cir,squ;

    shape()
    {
        cout<<"l=";
        cin>>l;
        cir=3.14*l*l;
        cout<<"cir="<<cir<<endl;
        
    }
    shape(int x,int y)
    {
    
        l=x;
        b=y;
        rec=l*b;
        cout<<"rec="<<rec<<endl;
    }
    shape(shape &c)
    {
        l=c.l;
        squ=l+l+l+l;
        cout<<"squ="<<squ<<endl;
    }

};
int main ()
{
    shape o;
    shape o1(3,4);
    shape o2(o);
    return 0;
}