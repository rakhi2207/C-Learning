#include<iostream>
using namespace std;
int getBit(int n,int pos)
{
    return (n&&(n&(1<<pos)));
}
int setBit(int value,int i)
{
    return value|(1<<i);
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
    int value=0,sum;
    for(int i=0;i<64;i++)
    {
        sum=0;
        for(int j=0;j<n;j++)
        {
            if(getBit(arr[j],i)==1)
            {
                sum++;
            }
        }
        if(sum%3!=0)
        {
            value=setBit(value,i);
        }
    }
    cout<<value<<"\n";
}