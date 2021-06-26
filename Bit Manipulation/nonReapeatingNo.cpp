#include<iostream>
using namespace std;
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
    cout<<"Element is "<<xorele<<"\n";
    return 0;
}