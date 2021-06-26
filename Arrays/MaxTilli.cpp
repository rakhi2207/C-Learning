#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the length of the array";
    cin>>N;
    cout<<"Enter the array ";
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int maxValue=0;

    for(int i=0;i<N;i++)
    {
        cout<<max(maxValue,arr[i])<<" ";
        maxValue=max(maxValue,arr[i]);
    }
    return 0;
}