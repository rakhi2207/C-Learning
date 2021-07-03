#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T-->0)
    {
        string s;
        cin>>s;
        string ans="Sucess";
        if(s.size()<=3)
        {
            ans="Error";
        }else if(s[0]!='<'||s[1]!='/'||s[s.size()-1]!='>')
        {
            ans="Error";
        }else
        {
            for(int i=2;i<s.size()-1;i++)
            {
                if(!((s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9')))
                {
                    ans="Error";
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}