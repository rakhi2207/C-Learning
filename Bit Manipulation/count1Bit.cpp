#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value ";
    cin>>n;
    int count=0;
    while(n!=0)
    {
        n=n&(n-1);
        count++;
    }
    cout<<"No of ones is "<<count<<"\n";
    return 0;
}