#include<iostream>
using namespace std;
class minium
{
    public:
    int a,b,c;

    void get()
    {
        cout<<"a=";
        cin>>a;
        cout<<"b=";
        cin>>b;
        cout<<"c=";
        cin>>c;
    }
    friend void put(minium s);
};
void put(minium s)
{
    if (s.a<s.b)
    {
        if (s.a<s.c)
        {
            cout<<"a is min number";
     
        }
        else 
        {
            cout<<"b is min number";
        }

    }
    else 
    {
        if(s.b<s.c)
        {
            cout<<"b is min";
        }
        else
        {
            cout<<"c is min";
        }
        
    }
}
int main ()
{
    minium m;
    m.get();
    put(m);
    return 0;

}