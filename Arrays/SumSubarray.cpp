#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the length of array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=arr[i];
        cout<<sum<<" ";
        for(int j=i+1;j<n;j++)
        {
            sum=sum+arr[j];
            cout<<sum<<" ";
        }
        cout<<"\n";
        sum=0;
    }
    return 0;
}