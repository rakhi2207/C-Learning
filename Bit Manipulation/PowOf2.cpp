#include<iostream>
using namespace std;
int pow(int n)
{
    return (n&&(n&(n-1)));
}
int main()
{
    int n;
    cout<<"Enter the no";
    cin>>n;
    if(pow(n)==0)
    {
        cout<<n<<" is power of 2 \n";
    }else
    {
        cout<<n<<" is not power of 2 \n";
    }
    return 0;
}