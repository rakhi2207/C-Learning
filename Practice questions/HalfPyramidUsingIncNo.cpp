#include<iostream>
using namespace std;
int main()
{
    int row,column;
    cout<<"Enter row ";
    cin>>row;
    cout<<"Enter column ";
    cin>>column;
    int count=1;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<"\n";
    }
    return 0;
}