#include<iostream>
using namespace std;
string replacextolast(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ans=s[0];
    string s1=replacextolast(s.substr(1));
    if(ans=='x')
    {
        return s1+ans;
    }
      return ans+s1;

}
int main()
{
    string s;
    cout<<"Enter a string ";
    cin>>s;
    cout<<replacextolast(s);
    cout<<"\n";
    return 0;
}