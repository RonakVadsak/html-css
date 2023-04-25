#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[30];
    int cost;
    ofstream outf("item.txt");
    cout<<"enter item name=";
    cin>>name;
    outf<<"name="<<name<<endl;
    cout<<"cost=";
    cin>>cost;
    outf<<"cost="<<cost<<endl;
    outf.close();
    return 0;
}