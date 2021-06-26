#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the length of the array ";
    cin>>N;
    int arr[N];
    cout<<"Enter the elements of the array";
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    if(N==1)
    {
        cout<<"1"<<"\n";
        return 0;
    }
    int count=0,max_value=INT_MIN;
    for(int i=0;i<N-1;i++)
    {
        max_value=max(max_value,arr[i]);
        if(max_value==arr[i]&&arr[i]>arr[i+1])
        {
            count++;
        }
    }
    max_value=max(max_value,arr[N-1]);
    if(max_value==arr[N-1])
    {
        count++;
    }
    cout<<count<<"\n";
    return 0;
}