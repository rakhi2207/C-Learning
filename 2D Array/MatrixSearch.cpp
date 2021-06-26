#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the row and column of array ";
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
    int k;
    bool check=true;
    cout<<"Enter the element to be searched";
    cin>>k;
    int row=0,column=m-1;
    while(row>=0&&row<n&&column>=0&&column<m)
    {
        if(arr1[row][column]<k)
        {
            row++;
        }else if(arr1[row][column]>k)
        {
            column--;
        }else if(arr1[row][column]==k)
        {
            check=false;
            cout<<"1\n";
            break;
        }
    }
    if(check)
    {
        cout<<"0\n";
    }
    return 0;
}