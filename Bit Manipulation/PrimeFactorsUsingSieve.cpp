#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value";
    cin>>n;
    int count;
    int arr[n+1]={0};
    for(int i=2;i<=n;i++)
    {
        if(arr[i]==0){
        count=i;
        int ans=i*count;
        while(ans<=n)
        {
            if(arr[ans]==0){
                arr[ans]=i;
            }
            count++;
            ans=i*count;
        }
        }
    }
// for(int i:arr)
// {
//     cout<<i<<" ";
// }
while(n!=0)
{
    if(arr[n]!=0){
    cout<<arr[n]<<" ";
    n=n/arr[n];
    }else{
      cout<<n<<" ";
      n=n%n;
    }
}
    cout<<"\n";
    return 0;
}