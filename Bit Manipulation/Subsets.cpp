#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the length of the array";
    cin>>n;
    cout<<"Enter the elements of the array";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<(1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                cout<<arr[j];
            }
        }
        cout<<"\n";
    }
    return 0;
}