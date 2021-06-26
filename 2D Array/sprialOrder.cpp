#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the row and column";
    cin>>n;
    cin>>m;
    cout<<"Enter the elements of array";
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    int rs=0,re=n-1,cs=0,ce=m-1;

    while(rs<=re&&cs<=ce)
    {
        //starting row;
        for(int i=cs;i<=ce;i++)
        {
            cout<<a[rs][i]<<" ";
        }
        rs++;
        //last column
        for(int i=rs;i<=re;i++)
        {
            cout<<a[i][ce]<<" ";
        }
        ce--;
        //last row
        for(int i=ce;i>=cs;i--)
        {
            cout<<a[re][i]<<" ";
        }
        re--;

        //start column
        for(int i=re;i>=rs;i--)
        {
            cout<<a[i][cs]<<" ";
        }
        cs++;        
    }
    cout<<"\n";
    return 0;
}