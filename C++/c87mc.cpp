#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
    char name[30];
    int rollno;
    ifstream inf("a.txt");
    inf>>name;
    cout<<"name="<<name<<endl;
    inf.close();

    ifstream inf1("b.txt");
    inf1>>rollno;
    cout<<"rollno="<<rollno<<endl;
    inf1.close();

    ofstream outf("d.txt");
    outf<<name;
    cout<<endl;
    outf<<rollno;
    outf.close();

    cout<<"file copy!";
    return 0;
}