#include<bits/stdc++.h>
using namespace std;


//Question is to find the maximum sum of subarray
int main()
{
    cout<<"Enter the length of the array ";
    int N;
    cin>>N;
    cout<<"Enter the value of array";
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }

    //Brute force approach to do this ques

    // int max_sum=0;
    // for(int i=0;i<N;i++)
    // {
    //     for(int j=i;j<N;j++)
    //     {
    //         int sum=0;
    //         for(int k=i;k<=j;k++)
    //         {
    //             sum+=arr[k];
    //             max_sum=max(max_sum,sum);
    //         }
    //     }
    // }
    // cout<<max_sum<<"\n";

    //O(n2+n) approach to solve this problem
    // int ans[N];
    // int sum=0;
    //  for(int i=0;i<N;i++)
    //  {
    //      sum+=arr[i];
    //      ans[i]=sum;
    //  }
    // int max_sum=INT_MIN;
    // for(int i=0;i<N-1;i++)
    // {
    //     max_sum=max(max_sum,ans[i]);
    //     for(int j=i+1;j<N;j++)
    //     {
    //         if(i==N-2)
    //         {
    //             max_sum=max(max_sum,ans[j]);
    //         }
    //         sum=ans[j]-ans[i];
    //         max_sum=max(max_sum,sum);
    //     }
    // }
    // cout<<max_sum<<"\n";


    //Kadane's Algorithm(solve the above que in o(n) approach)
    int currentsum=0,max_currentSum=INT_MIN;
    for(int i=0;i<N;i++)
    {
        currentsum+=arr[i];
        if(currentsum<0)
        {
            currentsum=0;
        }
        max_currentSum=max(currentsum,max_currentSum);
    }
    cout<<max_currentSum<<"\n";

    return 0;
}