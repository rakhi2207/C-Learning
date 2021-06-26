#include<iostream>
using namespace std;
int updateBit(int n,int i,int k)
{
    if(k==0)
    {
        int value=~(1<<i);
        return n&value;
    }else
    {
        return n|(1<<i);
    }
}
int main()
{
    int n,i,k;
    cout<<"Enter the value";
    cin>>n;
    cout<<"Enter the position";
    cin>>i;
    cout<<"Enter the bit";
    cin>>k;
    cout<<updateBit(n,i,k)<<"\n";
    return 0;
}