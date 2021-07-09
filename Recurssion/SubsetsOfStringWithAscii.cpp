#include<iostream>
using namespace std;

void Ascii(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<"\n";
        return ;
    }
    char ch=s[0];
    Ascii(s.substr(1),ans);
    Ascii(s.substr(1),ans+ch);
    int val=ch;
    Ascii(s.substr(1),to_string(val));
}
int main()
{
    string s;
    cout<<"Enter a string";
    cin>>s;
    Ascii(s,"");
    return 0;
}