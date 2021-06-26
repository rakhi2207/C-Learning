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
        for(int j=0;j<column;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}