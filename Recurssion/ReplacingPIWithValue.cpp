#include<iostream>
using namespace std;
void replacingpi(string s)
{
    if(s.length()==0)
    {
        return ;
    }
    if(s[0]=='p'&&s[1]=='i')
    {
        cout<<"3.14";
        replacingpi(s.substr(2));
    }else
    {
        cout<<s[0];
        replacingpi(s.substr(1));
    }
}
int main()
{
    string s;
    cout<<"Enter a string ";
    cin>>s;
    replacingpi(s);
    cout<<"\n";
    return 0;
}