#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a numbers ";
    cin>>a;
    int* p=&a;
    cout<<a<<"\n";
    cout<<p<<"\n";
    cout<<&a<<"\n";
    cout<<*p<<"\n";
    cout<<&p<<"\n";

    int** q=&p;
    cout<<q<<"\n";
    cout<<*q<<"\n";
    cout<<**q<<"\n";
}