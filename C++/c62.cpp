#include<iostream>
using namespace std;
class temp
{
    public:
    int n;
    void get()
    {
        cout<<"n=";
        cin>>n;
    }
    void max (temp a,temp b)
    {
        if (a.n>b.n)
        {
            cout<<"a is max="<<a.n<<endl;
        }
        else 
        {
            cout<<"b is max="<<b.n<<endl;
        }
    }
    
};
int main ()
{
    temp t1,t2,t3;
    t1.get();
    t2.get();
    t3.max(t1,t2);
    return 0;
}