#include <iostream>
using namespace std;
class item
{
    public:
    int n;
    static int c;// static is keyword
    void get(int a)
    {
        n=a;
        cout<<"n="<<n<<endl;
        c++;
        
    }
    void put()
    {
        cout<<c<<endl;
    }
};

int item::c;//int is datype and item is class name and c use for statctic 
int main ()
{
    item a,b,c;
    a.get(100);
    b.get(200);
    c.get(300);

    a.put();
    b.put();
    c.put();
    cout<<"total="<<item::c<<endl;
    return 0;
}
