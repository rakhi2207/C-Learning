#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("FirstFile.dat",ios::out);
    int pos;
    pos=fout.tellp();
    cout<<pos<<"\n";
    fout<<"Rakhi .Keep Learning";
    fout.seekp(-6,ios::end);
    pos=fout.tellp();
    cout<<pos<<"\n";
    fout.close();
    return 0;
}
