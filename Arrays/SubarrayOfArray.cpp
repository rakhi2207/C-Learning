#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the length of array";
    cin>>N;
    int arr[N];
    cout<<"Enter the value of array";
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<N;i++)
    {
        for(int j=i;j<N;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}