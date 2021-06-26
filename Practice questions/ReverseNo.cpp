#include<iostream>
using namespace std;
int main()
{
     int row,column;
    cout<<"Enter row ";
    cin>>row;
    cout<<"Enter column ";
    cin>>column;
    for(int i=row;i>0;i--)
    {
        for(int j=1;j<=column;j++)
        {
            j<=i?cout<<j:cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}