#include<iostream>
using namespace std;
int getBit(int n,int i)
{
    return (n&(!(1<<i)))!=0?1:0;
}
int main()
{
    int n,i;
    cout<<"Enter the value";
    cin>>n;
    cout<<"Enter the position";
    cin>>i;
    cout<<getBit(n,i)<<"\n";
}