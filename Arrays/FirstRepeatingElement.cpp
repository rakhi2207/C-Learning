#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the length of the array ";
    cin>>N;
    int arr[N];
    cout<<"Enter the elements of the array ";
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int ans[N];
    fill_n(ans,N,-1);
    int min_index=INT_MAX;
    for(int i=0;i<N;i++)
    {
        if(ans[arr[i]]==-1)
        {
            ans[arr[i]]=i;
        }else
        {
            min_index=min(min_index,ans[arr[i]]);
        }
    }
    cout<<min_index+1<<"\n";

    return 0;
}