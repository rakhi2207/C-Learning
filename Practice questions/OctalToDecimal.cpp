#include <iostream>
#include<math.h>
using namespace std;
int BinaryToDecimal(int a)
{
    int ans=0;
    int x=1;
    // while(a!=0)
    // {
    //     int value=a%10;
    //     a=a/10;
    //     ans=ans+value*pow(8,x++);
    // }

    //Another Method
        while(a!=0)
    {
        int value=a%10;
        a=a/10;
        ans+=x*value;
        x*=8;
    }
    return ans;
}
int main()
{
    int a;
    cin>>a;
    cout<<BinaryToDecimal(a)<<"\n";
    return 0;
}