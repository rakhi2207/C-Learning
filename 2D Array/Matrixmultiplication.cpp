#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the row and column of first array ";
    int n,m;
    cin>>n>>m;
    int arr1[n][m];
    cout<<"Enter the items of array ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter the row and column of second array ";
    int n1,m1;
    cin>>n1>>m1;
    int arr2[n1][m1];
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m1;j++)
        {
            cin>>arr2[i][j];
        }
    }

    int sum=0;
    int arrmul[n][m1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m1;j++)
        {
            for(int k=0;k<m;k++)
            {
                sum=sum+(arr1[i][k]*arr2[k][j]);
            }
            arrmul[i][j]=sum;
            sum=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m1;j++)
        {
            cout<<arrmul[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}