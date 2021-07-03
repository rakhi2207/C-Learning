#include<iostream>
using namespace std;
int decOrder(int arr[],int n,int i,int k)
{
        if(i==-1)
    {
        return -1;
    }
    if(arr[i]==k)
    {
        return i;
    }
    decOrder(arr,n,i-1,k);
}
int  firstOcc(int arr[],int n,int i,int k)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==k)
    {
        return i;
    }
    firstOcc(arr,n,i+1,k);
}
int main()
{
    int n;
    cout<<"Enter a length of array";
    cin>>n;
    int arr[n];
    cout<<"Enter eleemnts of array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }   
    int k;
    cout<<"Enter the value";
    cin>>k;
    cout<<"First Occurence is "<<firstOcc(arr,n,0,k)<<"\n";
    cout<<"Second Ocurrence is "<<decOrder(arr,n,n-1,k)<<"\n";
    return 0;
}