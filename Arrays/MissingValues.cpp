#include<iostream>
using namespace std;
int main()
{
    int N; 
    cout<<"Enter the size of array ";
    cin>>N;
    int arr[N+1];
    cout<<"Enter the array ";
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    bool ans[N];
    fill_n(ans,N,false);
    for(int i=0;i<N;i++)
    {
        if(arr[i]>=0){
            ans[arr[i]]=true;
        }
    }

    for(int i=0;i<N;i++)
    {
        if(ans[i]==false)
        {
            cout<<i<<"\n";
            break;
        }
    }
    return 0;
}