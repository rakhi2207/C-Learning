#include<iostream>
using namespace std;
int kadanes(int a[],int n)
{
    int currentsum=0;
    int maxsum=0;
    for(int i=0;i<n;i++)
    {
        currentsum+=a[i];
        if(currentsum<0)
        {
            currentsum=0;
        }
        maxsum=max(maxsum,currentsum);
    }
    return maxsum;
}
int main()
{
    int n;
    cout<<"Enter the length of the array";
    cin>>n;
    cout<<"Enter the elements of the array";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int prevsum=kadanes(arr,n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        arr[i]=-arr[i];
    }
    int nextsum=kadanes(arr,n);
    sum=sum+nextsum;
    cout<<max(prevsum,sum)<<"\n";
    return 0;
}