#include<iostream>
using namespace std;
bool getBit(int n,int pos)
{
    return (n&&(n&(1<<pos)))!=0?1:0;
}
int main()
{
    int n;
    cout<<"Enter the length of the array";
    cin>>n;
    cout<<"Enter the elementts of array";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int xorele=arr[0];
    for(int i=1;i<n;i++)
    {
        xorele=xorele xor arr[i];
    }
    int tempele=xorele;
    int setBit=0,pos=-1;
    while(setBit!=1)
    {
        setBit=xorele&1;
        pos++;
        xorele=xorele>>1;
    }
    int oneele=0;
    for(int i=0;i<n;i++)
    {
        if(getBit(arr[i],pos))
        {
            oneele=arr[i]^oneele;
        }
    }
    cout<<"one unique element is "<<oneele<<"\n";
    cout<<"Second unique element is "<<(tempele^oneele)<<"\n";
}