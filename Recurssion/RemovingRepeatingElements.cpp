#include<iostream>
using namespace std;
void removingDuplicates(string s)
{
    if(s.length()==0)
    {
        return ;
    }
    if(s[0]==s[1])
    {
        removingDuplicates(s.substr(1));
    }else
    {
        cout<<s[0];
        removingDuplicates(s.substr(1));
    }
}
int main()
{
    string s;
    cout<<"Enter a string ";
    cin>>s;
    removingDuplicates(s);
    cout<<"\n";
    return 0;
}