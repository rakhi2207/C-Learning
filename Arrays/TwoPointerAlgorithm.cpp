#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,K;
    cout<<"Enter the length of the array ";
    cin>>N;
    cout<<"Enter the sum ";
    cin>>K;
    int arr[N];
    cout<<"Enter the items of the array";
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }


    int i=0,j=1;
    int sum=arr[i]+arr[j];
    while(i<N||j<N){
        if(sum<K)
        {
            j++;
            sum=sum+arr[j];
        }else if(sum>K)
        {           
            sum=sum-arr[i];
            i++;
        }
        else if(sum==K)
        {
            cout<<i+1<<" "<<j+1<<"\n";
            break;
        }
    }


    return 0;
} 