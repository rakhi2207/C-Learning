#include<iostream>
using namespace std;
int main()
{
     int n;
    cout<<"Enter row ";
    cin>>n;
    if(n==1)
    {
      cout<<"*";
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=(n-i-1);j++)
        {
                cout<<"  ";
        }
        for(int j=i+1;j>=1;j--)
        {
            cout<<j<<" ";
        }
        for(int j=2;j<=1+i;j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}