#include<iostream>
using namespace std;
int main()
{
        int N;
    cout<<"Enter the length of array\n";
    cin>>N;
    cout<<"Enter the array in sorted manner\n";
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<N-1;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
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