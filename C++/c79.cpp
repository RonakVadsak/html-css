#include<iostream>
using namespace std;
class rectangle
{
    public:
    int l,w,rec;
    void get()
    {
        cout<<"length=";
        cin>>l;
        cout<<"width=";
        cin>>w;
    }
    virtual void put()
    {
        rec=l*w;
        cout<<"rectangle="<<rec<<endl;
    }
};
class triangle:public rectangle
{
    int tri;
    void get()
    {
        cout<<"length=";
        cin>>l;
        cout<<"width=";
        cin>>w;
    }
    void put()
    {
        tri=(l*w)/2;
        cout<<"triangle="<<tri<<endl;
    }
};
int main()
{
    rectangle R;
    triangle T;

    rectangle *rptr;
    rptr=&R;
    rptr->get();
    rptr->put();

    rptr=&T;
    rptr->get();
    rptr->put();
    return 0;
}