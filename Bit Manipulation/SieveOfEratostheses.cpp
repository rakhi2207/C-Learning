#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value";
    cin>>n;
    int count;
    bool arr[n+1];
    for(int i=2;i<=n;i++)
    {
        if(arr[i]==false){
        count=i;
        int ans=i*count;
        while(ans<=n)
        {
            arr[ans]=true;
            count++;
            ans=i*count;
        }
        }
    }

    for(int i=2;i<n+1;i++)
    {
        if(arr[i]==false)
        {
            cout<<i<<" ";
        }
    }
    cout<<"\n";
    return 0;
}