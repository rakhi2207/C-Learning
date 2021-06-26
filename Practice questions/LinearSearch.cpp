#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the length of array\n";
    cin>>N;
    cout<<"Enter the array\n";
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to be serached\n";
    int S;
    cin>>S;
    bool check=true;
    for(int i=0;i<N;i++)
    {
        if(arr[i]==S)
        {
            cout<<S<<" is present at index "<<i<<"\n";
            check=false;
        }
    }
    if(check)
    {
        cout<<S<<" is not present in the array \n";
    }

    return 0;
}