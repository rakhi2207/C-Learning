#include<iostream>
using namespace std;
int setBit(int n,int i)
{
    return n|(1<<i);
}
int main()
{
    int n,i;
    cout<<"Enter the value";
    cin>>n;
    cout<<"Enter the position";
    cin>>i;
    cout<<setBit(n,i)<<"\n";
    return 0;
}