#include<iostream>
using namespace std;
string Base9(int left)
{
    string ans="";
    int a=0;
    while(left!=0)
    {
        a=left%9;
        left=left/9;
        ans=to_string(a)+ans;
    }
    return ans;
}
int main()
{
    int a;
    cout<<"Enter the decimal no ";
    cin>>a;
    string s2=Base9(a);
    cout<<s2;
    return 0;
}