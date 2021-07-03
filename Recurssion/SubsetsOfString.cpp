#include<iostream>
using namespace std;
void subset(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<"\n";
        return ;
    }
    char ch=s[0];
    string ros=s.substr(1);
    subset(ros,ans);
    subset(ros,ans+ch);
}
int main()
{
    string s;
    cout<<"Enter a string ";
    cin>>s;
    subset(s,"");
    cout<<"\n";
    return 0;
}