#include<iostream>
using namespace std;
int main()
{
    int row,column;
    cout<<"Enter row ";
    cin>>row;
    cout<<"Enter column ";
    cin>>column;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<2*column;j++)
        {
            if(j<=i||j>=2*column-i-1)
            {
                cout<<"*";
            }else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    for(int i=row-1;i>=0;i--)
    {
        for(int j=0;j<2*column;j++)
        {
            if(j<=i||j>=2*column-i-1)
            {
                cout<<"*";
            }else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}