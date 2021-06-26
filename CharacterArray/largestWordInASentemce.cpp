#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the length of sentence ";
    int n;
    cin>>n;
    char c[n+1];
    cin.ignore();
    cin.getline(c,n);
    cin.ignore();
    int i=0,max_length=0,currlen=0,st=0,maxst=0;

    while(1)
    {
        if(c[i]==' '||c[i]=='\0')
        {
            if(currlen>max_length)
            {
                max_length=currlen;
                maxst=st;
            }
            currlen=0;
            st=i+1;
        }else
            currlen++;
        if(c[i]=='\0')
        {
            break;
        }
        i++;
    }
    for(int i=maxst;i<maxst+max_length;i++)
    {
        cout<<c[i];
    }
    cout<<"\n";
    cout<<"Maximum length "<<max_length<<"\n";
    return 0;
}