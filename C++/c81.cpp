#include<iostream>
using namespace std;
class test
{
    public:
    int a;
    void get(int x)
    {
        a=x;
    }
    void display()
    {
        cout<<a<<endl;
    }
    test operator ++();

};
test test::operator ++()//both time class name then put scope resolution and make operatore for overloading
{
    int i,n;
    test t;
    cout<<"n=";
    cin>>n;
    for (i=0; i<n; i++)
    {
       t.a=++a;
       cout<<t.a<<endl;
    }
    return t;
}
int main ()
{
    test t1;
    t1.get(5);
    t1.display();
    ++t1;
    cout<<"after increment=";
    t1.display();
    return 0;

}

//unnarry:- ++,--
//++ this callled operator
// we can use operator globally in the code this called operator overloading 