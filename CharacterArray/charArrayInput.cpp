#include<iostream>
using namespace std;
int main()
{
    char c[100]={"An apple a day "};
    int i=0;
    while(c[i]!='\0')
    {
        cout<<c[i]<<"\n";
        i++;
    }

    return 0;
    // char c;
    // cin>>c;
    // cout<<c;
}