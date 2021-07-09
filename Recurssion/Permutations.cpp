#include<iostream>
using namespace std;
void permutations(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<"\n";
        return ;
    }
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        string rem=s.substr(0,i)+s.substr(i+1);
        permutations(rem,ans+ch);
    }

} 
int main()
{
    string s;
    cout<<"Ennter a string ";
    cin>>s;
    permutations(s,"");
    return 0;
}