#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a;
    cout<<"Enter no";
    cin>>a;
    int value=a;
    int sum=0;
    while(a!=0)
    {
        int b=a%10;
        sum=sum+(b*b*b);
        a=a/10;
    }    
    if(sum==value)
    {
        cout<<value<<" is a armstrong no\n";
    }else
    {
        cout<<value<<" is not a armstrong no\n";
    }
return 0;
}