#include<iostream>
using namespace std;
int main()
{
    int **p,*q,a;
    a=10;
    q=&a;
    p=&q;
    cout<<a<<"\n";
    cout<<&a<<"\n";
    cout<<q<<"\n";
    cout<<*q<<"\n";
    cout<<&q<<"\n";
    cout<<p<<"\n";
    cout<<*p<<"\n";
    cout<<**p<<"\n";

    return 0;
}