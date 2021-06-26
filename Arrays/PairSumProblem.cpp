#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the length of array ";
    cin>>n;
    int arr[n];
    int k;
    cout<<"Enter the elemnts of the array ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the sum";
    cin>>k;
    sort(arr,arr+n);
    int i=0,j=n-1;
    while(j>=i)
    {
        if(arr[i]+arr[j]<k)
        {
            i++;
        }else if(arr[i]+arr[j]>k)
        {
            j--;
        }else
        {
            cout<<"sum of "<<arr[i]<<" and "<<arr[j]<<" is "<<k<<"\n";
            break;
        }
    }

    return 0;
}