#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==1||n==0)
    {
        return n;
    }else
    {
        return fib(n-1)+fib(n-2);
    }
}
int main()
{
    int n;
    cout<<"Enter a no";
    cin>>n;
    cout<<fib(n)<<"\n";
    return 0;
}