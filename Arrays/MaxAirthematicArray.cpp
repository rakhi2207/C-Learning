#include<iostream>
using namespace std;
int main()
{
    long long int N;
    cout<<"Enter the length of array ";
    cin>>N;
    long long int arr[N];
    int check=-1;
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }

    int count=2,max_count=2;
    int pd=arr[1]-arr[0];
    int j=2;
    while(j<N)
    {
        if(arr[j]-arr[j-1]==pd)
        {
            count++;
        }else
        {
            pd=arr[j]-arr[j-1];
        }
        max_count=max(max_count,count);
        j++;
    }
    cout<<max_count;

    //My Solution
    // long long int ans[N-1];
    // for(int i=0;i<N-1;i++)
    // {
    //     ans[i]=arr[i+1]-arr[i];
    //     // if(ans[i]==0)
    //     // {
    //     //     check=1;
    //     // }
    // }
    // long long int count=0,max_count=0;
    // for(int i=0;i<N-2;i++)
    // {
    //     if(ans[i]==ans[i+1])
    //     {
    //         count++;
    //     }else{
    //         count=0;
    //     }
    //     // cout<<count<<" ";
    //     if(count>max_count)
    //     {
    //         max_count=count;
    //     }
    // }
    // // for(int i=0;i<N-1;i++)
    // // {
    // //     cout<<ans[i]<<" ";
    // // }
    // // if(N)
    // // if(check!=1)
    // // {
    // //     cout<<"0"<<"\n";
    // // }else{
    // //     cout<<max_count+2;
    // // }
    // if(count==)
    //  cout<<max_count+2;
    return 0;
}