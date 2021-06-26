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
        for(int j=0;j<N-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
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