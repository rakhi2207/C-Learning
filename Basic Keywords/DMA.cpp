#include<iostream>
using namespace std;
int main()
{
    int *p=new int;
    *p=4;
    cout<<"p is "<<*p<<"\n";
    delete p;
    return 0;
}