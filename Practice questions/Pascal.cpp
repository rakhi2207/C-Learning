#include<iostream>
using namespace std;

int fact(int a)
{
    int fact=1;
    for(int i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"Enter a no";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j<=i)
            {
                cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
