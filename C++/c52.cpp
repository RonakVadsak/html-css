#include <iostream>
using namespace std;
class rev
{
    public:
    int n,reverse,r;
    void get();
    void formula();
    void put ();
};
void rev::get()
{
    cout<<"n=";
    cin>>n;
}
void rev::formula()
{
    reverse=0;
    while (n>0)
    {
    r=n%10;
    reverse=reverse*10+r;
    n=n/10;
    }
    
} 
void rev::put()
{
    cout<<"reverse="<<reverse<<endl;
}
int main()
{
    rev r;
    r.get();
    r.formula();
    r.put();
    return 0;
}