#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter row";
    cin>>n;
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            if(j==0||j==2*i)
            {
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    for(int i =n-1;i>=0;i--)
    {
        for(int j=0;j<n-1-i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            if(j==0||j==2*i)
            {
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}