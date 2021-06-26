#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string";
    cin>>s;
    string ans="";
    for(int i=s.length()-1;i>=0;i--)
    {
        ans=ans+s[i];
    }
    if(s==ans)
    {
        cout<<"palindrome\n";
    }else
    {
        cout<<"not palindrome\n";
    }
    return 0;
}