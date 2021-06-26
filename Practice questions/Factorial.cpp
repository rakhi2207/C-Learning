#include<iostream>
using namespace std;

int fact(int a)
{
    int fact=1;
    for(int i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int main(){
    int a;
    cout<<"Enter a no";
    cin>>a;
    cout<<fact(a);
    return 0;
}
