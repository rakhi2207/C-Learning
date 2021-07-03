#include<iostream>
using namespace std;
void dec(int n)
{
    if(n==1)
    {
        cout<<n<<"\n";
        return ;
    }else
    {
        cout<<n<<"\n";
        return dec(n-1);
    }
}
int main()
{
    int n;
    cout<<"Enter a no";
    cin>>n;
    dec(n);
    return 0;
}