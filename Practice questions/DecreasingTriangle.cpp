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
        for(int j=column-1;j>=0;j--)
        {
            if(j>=i){
            cout<<"*";}
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}