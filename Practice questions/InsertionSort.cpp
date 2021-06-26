#include<iostream>
using namespace std;
int main()
{
            int N;
    cout<<"Enter the length of array\n";
    cin>>N;
    cout<<"Enter the array in sorted manner\n";
    int arr[N];
    for(int i=N-1;i>=0;i--)
    {
        cin>>arr[i];
    }
    for(int i=1;i<N;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]>arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<N;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
} 