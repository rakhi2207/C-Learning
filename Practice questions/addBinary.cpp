#include<iostream>
using namespace std;

string addBinary(int a,int b)
{
    string ans="";
    int prevCarry=0;
    while(a>0&&b>0)
    {
        int x=a%10;
        int y=b%10;
        if(x==0&&y==0)
        {
            if(prevCarry==1)
            {
               ans="1"+ans;
            }else
            {
                 ans="0"+ans;
            }
            prevCarry=0;
        }else if(x==1&&y==0||y==1&&x==0)
        {
            if(prevCarry==1)
            {
               ans="0"+ans;
               prevCarry=1;
            }else
            {
                 ans="1"+ans;
                 prevCarry=0;
            }
        }
        else{
            if(prevCarry==1)
            {
               ans="1"+ans;                                       
            }else
            {
                 ans="0"+ans;
            }
            prevCarry=1;
        }
        a=a/10;
        b=b/10;
    }
    if(prevCarry==1)
    {
        ans="1"+ans;   
    }
    return ans;
}

int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    cout<<addBinary(a,b)<<"\n";
    return 0;
}