#include<iostream>
using namespace std;
int HexaDecimal(string a)
{
    int ans=0;
    int x=1;
   for(int i=a.length()-1;i>=0;i--)
   {
       if(a[i]>='0'&&a[i]<='9')
       {
           ans=ans+(a[i]-'0')*x;
       }else
       {
           ans=ans+(a[i]-'A'+10)*x;
       }
       x*=16;
   }
   return ans;
}
int main()
{
    string a;
    cin>>a;
    cout<<HexaDecimal(a);
    return 0;
}