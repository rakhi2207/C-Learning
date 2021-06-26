#include<iostream>
using namespace std;
int clearBit(int n,int i)
{
    int value=~(1<<i);
    return n&value;
}
int main()
{
    int i,n;
    cout<<"Enter the value";
    cin>>n;
    cout<<"Enter the pos";
    cin>>i;
    cout<<clearBit(n,i)<<"\n";
    return 0;
}