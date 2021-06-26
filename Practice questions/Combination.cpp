#include<iostream>
using namespace std;

int comb(int c,int r)
{
    int a=1,b=1,d=1;
    for(int i=1;i<=c;i++)
    {
        a=a*i;
    }
    for(int i=1;i<=r;i++)
    {
        b=b*i;
    }
    for(int i=1;i<=(c-r);i++)
    {
        d=d*i;
    }
    int ans=a/(b*d);
    return ans;
}

int main(){
    int n,r;
    cout<<"Enter C";
    cin>>n;
    cout<<"Enter r";
    cin>>r;
    cout<<comb(n,r)<<"\n";
    return 0;
}
