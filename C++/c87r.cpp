#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
    char name[30];
    int cost;
    ifstream inf("item1.txt");
    inf>>name;
    inf>>cost;
    cout<<endl;
    cout<<name<<endl;;
    cout<<cost;
    inf.close();
    return 0;
}