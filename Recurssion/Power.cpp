#include<iostream>
using namespace std;
int power(int n,int pow)
{
    if(pow==0)
    {
        return 1;
    }else
    {
        if(pow%2==0)
        {
            return power(n*n,pow/2);
        }else
        {
            return power(n*n,(pow-1)/2)*n;
        }
    }
}
int main()
{
    int n,pow;
    cout<<"Enter a no";
    cin>>n;
    cout<<"Enter pow";
    cin>>pow;

    cout<<power(n,pow)<<"\n";
    return 0;
}