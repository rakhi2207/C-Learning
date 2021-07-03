#include<iostream>
using namespace std;
void reverse(string s,int i)
{
    if(i==-1)
    {
        return ;
    }
    cout<<s[i];
    reverse(s,i-1);
}
int main()
{
    string s;
    cout<<"Enter a string";
    cin>>s;
    reverse(s,s.length()-1);
    cout<<"\n";
    return 0;
}