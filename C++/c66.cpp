#include<iostream>
#include<string.h>
using namespace std;
class library
{
    public:
    char bname[200];
    float price;
    int isbn;

    library()
    {
        cout<<"book name=";
        fgets(bname,sizeof(bname),stdin);
        cout<<"price=";
        cin>>price;
        cout<<"isbnno=";
        cin>>isbn;

    }
    library(library &l)
    {
        cout<<"==================="<<endl;
        cout<<"book name="<<l.bname;
        cout<<"price="<<l.price<<endl;
        cout<<"isbnno="<<l.isbn<<endl;
    }
};
int main ()
{
    library c;
    library c1(c);

    return 0;
}