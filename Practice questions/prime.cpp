#include<iostream>
using namespace std;

bool prime(int a)
{
    for(int i=2;i<=(a/2);i++)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;
}

int main(){
    int a;
    cout<<"Enter a no";
    cin>>a;
    if(prime(a))
    {
        cout<<a<<" is prime no";
    }else
    {
        cout<<a<<" is not a prime no";
    }
    return 0;
}
