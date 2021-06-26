#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter no";
    cin>>a;
    int ans=0;
    while(a!=0)
    {
        int b=a%10;
        ans=ans*10+b;
        a=a/10;
    }
    cout<<ans<<"\n";
return 0;
}