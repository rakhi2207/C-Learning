#include<iostream>
using namespace std;
string binaryLeft(int left)
{
    string ans="";
    int a=0;
    while(left!=0)
    {
        a=left%2;
        left=left/2;
        ans=to_string(a)+ans;
    }
    return ans;
}
string binaryRight(float right)
{
    string ans1="";
    int a=0;
    for(int i=0;i<=9;i++)
    {
        right=right*2;
        a=right;
        right=right-a;
        ans1=ans1+to_string(a);
    }
    return ans1;
}
int main()
{
    float a;
    cout<<"Enter the decimal no ";
    cin>>a;
    float right=a-(int)a;
    int left=a-right;
    string s=binaryLeft(left); 
    string s2=binaryRight(right);
    cout<<s<<"."<<s2;
    return 0;
}