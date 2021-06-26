#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s,g;
    getline(cin,s);
    getline(cin,g);
    if(s.compare(g)>0)
    {
        cout<<s<<" is leoxically greater than "<<g<<"\n";
    }else if(s.compare(g)<0)
    {
        cout<<g<<" is leoxically greater than "<<s<<"\n";
    }else
    {
        cout<<s<<" "<<g<<" are leoxically equal \n";
    }

    s.clear();
    if(s.empty())
    {
        cout<<"String is empty \n";
    }

    //erase function
    g.erase(3,2);
    cout<<g<<"\n";

    cout<<g.find("abc")<<"\n";
    cout<<g.insert(3,"love")<<"\n";
    cout<<g.substr(3,2)<<"\n";


    //String to Integer;
    string str="567";
    cout<<stoi(str)+3<<"\n";

    //Integer to string
    int a=57;
    string z=to_string(a)+"23";
    cout<<z<<"\n";


    //String sort
    sort(g.begin(),g.end());
    cout<<g<<"\n";

    //Uppercase
    for(int i=0;i<g.length();i++)
    {
        if(g[i]>='a'&&g[i]<='z')
        {
            g[i]=g[i]-32;
        }
    }
    cout<<g<<"\n";


    //Lowercase
    for(int i=0;i<g.length();i++)
    {
        if(g[i]>='A'&&g[i]<='Z')
        {
            g[i]=g[i]+32;
        }
    }
    cout<<g<<"\n";


    transform(g.begin(),g.end(),g.begin(),::toupper);
    cout<<g<<"\n";
    transform(g.begin(),g.end(),g.begin(),::tolower);
    cout<<g<<"\n";
    return 0;
}