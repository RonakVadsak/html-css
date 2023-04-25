#include<iostream>
using namespace std;
class factorial 
{
    public:
    int n;
    void get();
    void put();
};
void factorial::get()
{
    cout<<"n=";
    cin>>n;
}
void factorial::put()
{
    int a=1,i;
    for(i=1; i<=n; i++)
    {
       a=a*i;
    }
    cout<<a<<endl;
}
int main ()
{
    factorial f;

    f.get();
    f.put();
    return 0;
}
