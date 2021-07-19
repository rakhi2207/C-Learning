#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("FirstFile.dat");
    int pos;
    char ch;
    fin.get(ch);
    while(!fin.eof())
    {
        cout<<ch;
        fin.get(ch);
    }

    cout<<"\n";
    fin.close();
    return 0;
}