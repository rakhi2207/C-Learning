#include<iostream>
using namespace std;
long int sum(long int n)
{
    long int sum1=(n*(n+1))/2;
    return sum1;
}
int main()
{
    long int a;
    cout<<"Enter the natural no";
    cin>>a;
    cout<<"Sum is "<<sum(a)<<"\n";
    return 0;
}