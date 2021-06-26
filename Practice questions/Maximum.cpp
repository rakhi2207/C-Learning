#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter the first no";
    cin>>a;
    cout<<"Enter the second no";
    cin>>b;
    cout<<"Enter the second no";
    cin>>c;
     d=max(a,b);
    cout<<"Maximum no is"<<max(d,c)<<"\n";
    return 0;
}