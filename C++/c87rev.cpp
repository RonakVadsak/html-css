#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
    char name[20];
    ifstream inf("reverse.txt");
    inf>>name;
    cout<<name;
    inf.close();
    strrev(name);  
    ofstream outf("reverse.txt");
    outf<<name;
    cout<<name;
    outf.close();
    return 0;

}