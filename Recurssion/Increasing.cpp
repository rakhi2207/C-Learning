#include<iostream>
using namespace std;
void inc(int n)
{
    if(n==1)
    {
        cout<<n<<"\n";
        return ;
    }else
    {
        inc(n-1);
        cout<<n<<"\n";
    }
}
int main()
{
    int n;
    cout<<"Enter a no";
    cin>>n;
    inc(n);
    return 0;
}