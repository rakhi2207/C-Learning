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
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=(2*n-(n-3));j++)
        {
            if(j>=i)
            {
                cout<<"* ";
            }else{
                cout<<" ";
            }

        }
        cout<<"\n";
    }
    return 0;
}